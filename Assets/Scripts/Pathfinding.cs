using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Room
{
    public Room previousRoom = null;
    public string name;

    public Room(string name, Room previousRoom)
    {
        this.name = name;
        this.previousRoom = previousRoom;
    }

    public ArrayList GetAllPreviousRooms()
    {
        ArrayList previousRooms = new ArrayList();
        Room room = this;
        while (room.previousRoom != null)
        {
            previousRooms.Add(room.previousRoom.name);
            room = room.previousRoom;
        }
        return previousRooms;
    }

    public ArrayList GetRoute()
    {
        ArrayList allPreviousRooms = GetAllPreviousRooms();
        ArrayList route = new ArrayList();
        for (int i = allPreviousRooms.Count - 2; i >= 0; i--)
        {
            route.Add(allPreviousRooms[i]);
        }
        route.Add(name);
        return route;
    }
}

public class Pathfinding : MonoBehaviour
{
    private string[] kitchenRooms = new string[] { "livingRoom" };
    private string[] livingRoomRooms = new string[] { "kitchen", "landing", "diningRoom" };
    private string[] diningRoomRooms = new string[] { "livingRoom" };
    private string[] bathroomRooms = new string[] { "landing" };
    private string[] landingRooms = new string[] { "bathroom", "livingRoom", "bedroom" };
    private string[] bedroomRooms = new string[] { "landing", "roofTerrace" };
    private string[] roofTerraceRooms = new string[] { "bedroom" };

    private string start = null;
    private string target = null;
    private ArrayList visited = new ArrayList();
    private Room pathFound;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public Room Pathfind(string target, string current, bool isStart = true, ArrayList visited = null, Room previousRoom = null)
    {
        if (isStart)
        {
            this.target = target;
            this.start = current;
        }

        if (visited == null)
        {
            visited = new ArrayList();
        }

        visited.Add(current);
        string[] connectedRooms = GetConnectedRooms(current);
        if (connectedRooms == null)
        {
            // Borked
            return null;
        }

        ArrayList unvisitedRooms = new ArrayList();
        foreach (string room in connectedRooms)
        {
            if (!visited.Contains(room))
            {
                unvisitedRooms.Add(room);
            }
        }

        Room currentRoom = new Room(current, previousRoom);

        if (currentRoom.name == target)
        {
            pathFound = currentRoom;
            return pathFound;
        }

        foreach (string room in unvisitedRooms)
        {            
            Pathfind(target, room, false, visited, currentRoom);
        }

        return pathFound;
    }

    string[] GetConnectedRooms(string current)
    {
        switch (current)
        {
            case "kitchen":
                return kitchenRooms;
            case "livingRoom":
                return livingRoomRooms;
            case "diningRoom":
                return diningRoomRooms;
            case "bathroom":
                return bathroomRooms;
            case "landing":
                return landingRooms;
            case "bedroom":
                return bedroomRooms;
            case "roofTerrace":
                return roofTerraceRooms;
            default:
                Debug.Log("You've fucked it");
                return null;
        }
    }
}
