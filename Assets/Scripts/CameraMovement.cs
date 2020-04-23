using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    private Vector2? startPos;
    private Vector2? target = null;
    private float speed = 3.0f;
    private float? startTime = null;
    public Transform kitchen, livingRoom, diningRoom, bathroom, landing, bedroom, roofTerrace;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (target.HasValue)
        {
            if (!startTime.HasValue || !startPos.HasValue)
            {
                startTime = Time.time;
                startPos = transform.position;
            }            

            float distCovered = (Time.time - startTime.Value) * speed;
            float journeyLength = Vector2.Distance(startPos.Value, target.Value);
            if (journeyLength == 0)
            {
                target = null;
                startTime = null;
                startPos = null;
                return;
            }
            float fractionOfJourney = distCovered / journeyLength;

            transform.position = Vector2.Lerp(startPos.Value, target.Value, fractionOfJourney);

            if (transform.position.Equals(target.Value))
            {
                target = null;
                startTime = null;
                startPos = null;
            }
        }
    }

    public void MoveCamera(string room)
    {
        startPos = transform.position;
        startTime = Time.time;

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
}
