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
    Vector2 target;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        polygonCollider = GetComponent<PolygonCollider2D>();
        pathfinding = GetComponent<Pathfinding>();
        Room path = pathfinding.Pathfind("bedroom", "diningRoom");
        dudeNeeds = GetComponent<DudeNeeds>();

        string pathString = $"{path.name}, ";
        foreach (string currentRoom in path.GetAllPreviousRooms())
        {
            pathString += $"{currentRoom}, ";
        }

        Debug.Log(pathString);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        if(!dudeNeeds.dead)
        {
            Movement();
        }
    }

    void JumpingDude()
    {
        rb.AddForce(new Vector2(1.0f, 2.0f) * jumpForce, ForceMode2D.Impulse);
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
        string room = collision.name;

        switch (room)
        {
            case "kitchen":
                currentRoom = kitchen.position;
                break;
            case "livingRoom":
                currentRoom = livingRoom.position;
                break;
            case "diningRoom":
                currentRoom = diningRoom.position;
                break;
            case "bathroom":
                currentRoom = bathroom.position;
                break;
            case "landing":
                currentRoom = landing.position;
                break;
            case "bedroom":
                currentRoom = bedroom.position;
                break;
            case "roofTerrace":
                currentRoom = roofTerrace.position;
                break;
            default:
                break;
        }
    }
}
