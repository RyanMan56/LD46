using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stairs : MonoBehaviour
{
    PlatformEffector2D platformEffector;
    private int mask = ~0;

    // Start is called before the first frame update
    void Start()
    {
        platformEffector = GetComponent<PlatformEffector2D>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        int mask = ~0;

        if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
        {
            mask = ~(1 << LayerMask.NameToLayer("Player"));
        }

        if (mask != this.mask)
        {
            platformEffector.colliderMask = mask;
            this.mask = mask;
        }
    }
}
