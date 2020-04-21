using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Retry : MonoBehaviour
{
    public GameObject mourn, mourn2, mourn3;
    public GameObject boi, boi2, boi3, boi4, boi5, boi6;
    private DudeNeeds dudeNeeds, dudeNeeds2, dudeNeeds3, dudeNeeds4, dudeNeeds5, dudeNeeds6;
    private bool gameOver = false;
    public GameObject player;
    private Vector2? startPos;
    private Vector2? target = null;
    private float speed = 3.0f;
    private float? startTime = null;
    public bool winScript = false;

    // Start is called before the first frame update
    void Start()
    {
        mourn.SetActive(false);
        mourn2.SetActive(false);
        mourn3.SetActive(false);

        dudeNeeds = boi.GetComponent<DudeNeeds>();
        dudeNeeds2 = boi2.GetComponent<DudeNeeds>();
        dudeNeeds3 = boi3.GetComponent<DudeNeeds>();
        dudeNeeds4 = boi4.GetComponent<DudeNeeds>();
        dudeNeeds5 = boi5.GetComponent<DudeNeeds>();
        dudeNeeds6 = boi6.GetComponent<DudeNeeds>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!gameOver)
        {
            if (((dudeNeeds.dead || dudeNeeds2.dead || dudeNeeds3.dead || dudeNeeds4.dead || dudeNeeds5.dead || dudeNeeds6.dead) && !winScript) || ((dudeNeeds.planted && dudeNeeds2.planted && dudeNeeds3.planted && dudeNeeds4.planted && dudeNeeds5.planted && dudeNeeds6.planted) && winScript))
            {
                mourn.SetActive(true);
                mourn2.SetActive(true);
                mourn3.SetActive(true);
                player.SetActive(false);

                startTime = Time.time;
                startPos = Camera.main.transform.position;
                target = transform.position;
                gameOver = true;
            }
        }
        else
        {
            if (target.HasValue)
            {
                float distCovered = (Time.time - startTime.Value) * speed;
                float journeyLength = Vector2.Distance(startPos.Value, target.Value);
                float fractionOfJourney = distCovered / journeyLength;

                Camera.main.transform.position = Vector2.Lerp(startPos.Value, target.Value, fractionOfJourney);

                if (Camera.main.transform.position.Equals(target.Value))
                {
                    target = null;
                    startTime = null;
                    startPos = null;
                }
            }

            if (Input.GetKeyDown(KeyCode.R))
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }
        }
    }
}
