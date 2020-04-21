using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterController : MonoBehaviour
{
    private Animator animator;
    private CapsuleCollider2D capsuleCollider;
    private Rigidbody2D rb;
    private float speedMultiplier = 1.0f;
    private float direction = 1.0f;
    private float jumpForce = 300.0f;
    private GameObject carrying = null;

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        capsuleCollider = GetComponent<CapsuleCollider2D>();
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        float animationSpeed = Input.GetAxis("Horizontal") * speedMultiplier;
        float speed = animationSpeed * Time.deltaTime;
        animator.SetFloat("speed", Mathf.Abs(animationSpeed * 2));
        transform.Translate(Vector3.right * speed);
        direction = speed == 0.0f ? direction : Mathf.Sign(speed);
        transform.localScale = new Vector3(direction, 1, 1);

        if (carrying != null && Input.GetKey(KeyCode.E))
        {
            carrying.SendMessage("OnCarryEnd");
            carrying.GetComponent<Rigidbody2D>().AddForce(Vector2.right * 5.0f * transform.localScale.x, ForceMode2D.Impulse);
            carrying = null;
            animator.SetBool("carrying", false);
        }
    }

    private void FixedUpdate()
    {
        animator.SetFloat("vertical speed", rb.velocity.y);
        if (carrying != null)
        {
            carrying.transform.position = new Vector2(transform.position.x + 0.5f * transform.localScale.x, transform.position.y + 0.5f);
        }

        if ((Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.Space)) && rb.velocity.y <= 0.0f)
        {
            Vector2 rayStartPos = new Vector2(transform.position.x + capsuleCollider.offset.x, transform.position.y - capsuleCollider.size.y / 2 + capsuleCollider.offset.y);
            int playerMask = ~((1 << LayerMask.NameToLayer("Player")) | (1 << LayerMask.NameToLayer("Camera Trigger")));
            RaycastHit2D hit = Physics2D.Raycast(rayStartPos, -Vector2.up, 0.01f, playerMask);

            if (hit.collider != null)
            {
                float distance = Mathf.Abs(hit.point.y - rayStartPos.y);
                rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
            }
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (carrying == null && (collision.gameObject.layer == LayerMask.NameToLayer("Dood") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 2") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 3") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 4") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 5") || collision.gameObject.layer == LayerMask.NameToLayer("Dood 6")))
        {
            carrying = collision.gameObject;
            collision.gameObject.SendMessage("OnCarry");
            collision.transform.parent = transform;
            animator.SetBool("carrying", true);
        }
    }

    public void Planted()
    {
        carrying = null;
        animator.SetBool("carrying", false);
    }
}
