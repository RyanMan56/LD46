using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stairs : MonoBehaviour
{
    PlatformEffector2D platformEffector;
    private int mask = ~0;
    private ArrayList stairMasks;
    private ArrayList wallMasks;

    // Start is called before the first frame update
    void Start()
    {
        platformEffector = GetComponent<PlatformEffector2D>();
        stairMasks = new ArrayList();
        stairMasks.Add(LayerMask.NameToLayer("Dood"));
        stairMasks.Add(LayerMask.NameToLayer("Player"));
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
        {
            RemoveFromStairMask(LayerMask.NameToLayer("Player"));
        }

        if (Input.GetKeyUp(KeyCode.S) || Input.GetKeyUp(KeyCode.DownArrow))
        {
            AddToStairMask(LayerMask.NameToLayer("Player"));
        }
    }

    private void FixedUpdate()
    {
        //int mask = ~0;

        //if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
        //{
        //    mask = ~(1 << LayerMask.NameToLayer("Player"));
        //}        

        int mask = 0;
        foreach (int layerMask in stairMasks)
        {
            mask = (mask | (1 << layerMask));
        }       

        if (mask != this.mask)
        {
            platformEffector.colliderMask = mask;
            this.mask = mask;
        }
    }

    public void AddToStairMask(int layer)
    {
        int index = stairMasks.IndexOf(layer);
        if (index == -1)
        {
            stairMasks.Add(layer);
        }
    }

    public void RemoveFromStairMask(int layer)
    {
        stairMasks.Remove(layer);
    }

    public void AddToWallMask(int layer)
    {        
        int index = wallMasks.IndexOf(layer);
        if (index == -1)
        {
            wallMasks.Add(layer);            
        }
    }

    public void RemoveFromWallMask(int layer)
    {
        wallMasks.Remove(layer);
    }
}
