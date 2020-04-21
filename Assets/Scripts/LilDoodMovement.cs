using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LilDoodMovement : MonoBehaviour
{
    private Rigidbody2D rb;
    float timeTilJump = 1.0f;
    float jumpForce = 5.0f;
    PolygonCollider2D polygonCollider;
    Pathfinding pathfinding;
    DudeNeeds dudeNeeds;
    Vector2 currentRoom;
    public string currentRoomString = "kitchen";
    Vector2 target;
    ArrayList route = null;
    public Transform kitchen, livingRoom, diningRoom, bathroom, landing, bedroom, roofTerrace;
    public Stairs stairs;
    public AudioSource jumpSound;
    public Transform defaultParent;
    bool beingCarried;

    // Start is called before the first frame update
    void Start()
    {
        defaultParent = transform.parent;
        rb = GetComponent<Rigidbody2D>();
        polygonCollider = GetComponent<PolygonCollider2D>();
        pathfinding = GetComponent<Pathfinding>();        
        dudeNeeds = GetComponent<DudeNeeds>();
        SetRoute();
    }

    void SetRoute()
    {
        route = pathfinding.Pathfind(GetRandomTarget(currentRoomString), currentRoomString).GetRoute();
        SetTarget((string)route[0]);
    }

    void PrintRoute()
    {
        string routeString = "";
        foreach (string room in route)
        {
            routeString += $"{room}, ";
        }
        Debug.Log(routeString);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        if(!dudeNeeds.dead && dudeNeeds.isBorn && !beingCarried)
        {
            Movement();
        }
    }

    void JumpingDude()
    {
        {
            rb.AddForce(new Vector2(1.0f * target.x < transform.position.x ? -1 : 1, 2.0f) * jumpForce, ForceMode2D.Impulse);
            jumpSound.Play();
        }
    }

    void Movement()
    {
        Vector2 rayStartPos = new Vector2(transform.position.x, transform.position.y - polygonCollider.bounds.extents.y);
        int doodMask = ~(1 << gameObject.layer);
        RaycastHit2D hit = Physics2D.Raycast(rayStartPos, -Vector2.up, 0.1f, doodMask);

        float distance = Mathf.Abs(hit.point.y - rayStartPos.y);

        if (hit.collider != null)
        {
            timeTilJump -= Time.fixedDeltaTime;

            if (timeTilJump <= 0)
            {
                JumpingDude();
                timeTilJump = 1.0f;
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.name == "god-ray")
        {
            dudeNeeds.isPhotosynthesising = true;
        }

        switch (collision.name)
        {
            case "kitchen":
                currentRoom = kitchen.position;
                currentRoomString = collision.name;
                break;
            case "livingRoom":
                currentRoom = livingRoom.position;
                currentRoomString = collision.name;
                break;
            case "diningRoom":
                currentRoom = diningRoom.position;
                currentRoomString = collision.name;
                break;
            case "bathroom":
                currentRoom = bathroom.position;
                currentRoomString = collision.name;
                break;
            case "landing":
                currentRoom = landing.position;
                currentRoomString = collision.name;
                break;
            case "bedroom":
                currentRoom = bedroom.position;
                currentRoomString = collision.name;
                break;
            case "roofTerrace":
                currentRoom = roofTerrace.position;
                currentRoomString = collision.name;
                break;
            default:
                break;
        }
        
        if (currentRoomString == (string)route[0])
        {
            if (route.Count > 1)
            {
                route.Remove(route[0]);
                SetTarget((string)route[0]);
            }
            else
            {
                SetRoute();
            }

            if ((string)route[0] == "landing")
            {
                stairs.SendMessage("AddToStairMask", gameObject.layer);
            } else if ((string)route[0] == "livingRoom")
            {
                stairs.SendMessage("RemoveFromStairMask", gameObject.layer);
            }
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.name == "god-ray")
        {
            dudeNeeds.isPhotosynthesising = false;
        }
    }

    void SetTarget(string room)
    {
        switch (room)
        {
            case "kitchen":
                target = kitchen.position;
                break;
            case "livingRoom":
                target = livingRoom.position;
                break;
            case "diningRoom":
                target = diningRoom.position;
                break;
            case "bathroom":
                target = bathroom.position;
                break;
            case "landing":
                target = landing.position;
                break;
            case "bedroom":
                target = bedroom.position;
                break;
            case "roofTerrace":
                target = roofTerrace.position;
                break;
            default:
                break;
        }
    }

    string GetRandomTarget(string currentRoom)
    {
        int random = Random.Range(0, 7);
        string room;
        switch (random)
        {
            case 0:
                room = "kitchen";
                break;
            case 1:
                room = "livingRoom";
                break;
            case 2:
                room = "diningRoom";
                break;
            case 3:
                room = "bathroom";
                break;
            case 4:
                room = "landing";
                break;
            case 5:
                room = "bedroom";
                break;
            case 6:
                room = "roofTerrace";
                break;
            default:
                room = "kitchen";
                break;
        }

        if (currentRoom == room)
        {
            return GetRandomTarget(currentRoom);
        }

        return room;
    }

    public void OnCarry()
    {
        beingCarried = true;
        rb.gravityScale = 0;
    }

    public void OnCarryEnd()
    {
        transform.parent = defaultParent;
        beingCarried = false;
        rb.gravityScale = 1.0f;
    }
}
