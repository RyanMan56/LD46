using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jerry : MonoBehaviour
{
    private Rigidbody2D rb;
    private float upwardsForce = 8.0f;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        rb.AddForce(Vector2.up * upwardsForce);
    }
}
