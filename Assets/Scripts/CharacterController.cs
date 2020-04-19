using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterController : MonoBehaviour
{
    private Animator animator;
    private float speedMultiplier = 1.0f;
    private float direction = 1.0f;

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
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
}
