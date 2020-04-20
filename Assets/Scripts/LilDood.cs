using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LilDood : MonoBehaviour
{
    private Rigidbody2D rb;
    float timeTilJump = 1.0f;
    float jumpForce = 5.0f;
    PolygonCollider2D polygonCollider;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        polygonCollider = GetComponent<PolygonCollider2D>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        timeTilJump -= Time.fixedDeltaTime;

        Vector2 rayStartPos = new Vector2(transform.position.x, transform.position.y - polygonCollider.bounds.extents.y);
        int doodMask = ~(1 << LayerMask.NameToLayer("Dood"));
        RaycastHit2D hit = Physics2D.Raycast(rayStartPos, -Vector2.up, 0.1f, doodMask);

        float distance = Mathf.Abs(hit.point.y - rayStartPos.y);

        if (timeTilJump <= 0 && hit.collider != null)
        {
            JumpingDude();
            timeTilJump = 1.0f;
        }
    }

    void JumpingDude()
    {
        rb.AddForce(new Vector2(1.0f, 2.0f) * jumpForce, ForceMode2D.Impulse);
    }
}
