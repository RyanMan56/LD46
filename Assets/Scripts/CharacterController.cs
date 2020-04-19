﻿using System.Collections;
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
    }

    private void FixedUpdate()
    {
        animator.SetFloat("vertical speed", rb.velocity.y);
        if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.Space))
        {
            Vector2 rayStartPos = new Vector2(transform.position.x + capsuleCollider.offset.x, transform.position.y - capsuleCollider.size.y / 2 + capsuleCollider.offset.y);
            int playerMask = ~(1 << LayerMask.NameToLayer("Player"));
            RaycastHit2D hit = Physics2D.Raycast(rayStartPos, -Vector2.up, 0.01f, playerMask);

            if (hit.collider != null)
            {
                float distance = Mathf.Abs(hit.point.y - rayStartPos.y);
                Debug.Log($"{distance} {hit.collider.name}");
                Debug.DrawRay(rayStartPos, -Vector2.up);
                rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
            }
        }
    }
}
