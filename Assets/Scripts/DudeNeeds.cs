using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DudeNeeds : MonoBehaviour
{
    float thirstiness = 100.0f;
    bool beingWatered;
    float photosynthesis = 100;
    bool inTheSun;
    public bool dead = false;
    float growth = 0.0f;
    public GameObject ui;
    public RectTransform sunBar;
    public RectTransform growthBar;
    public GameObject leaf;
    public bool fullyGrown = false;
    public bool planted = false;
    public bool isPhotosynthesising = false;
    public bool isBorn = false;
    public float timeUntilBirth = 7.0f;
    private SpriteRenderer spriteRenderer;
    private Rigidbody2D rb;
    private PolygonCollider2D polygonCollider;
    public GameObject eyes, mouth, spike;
    public float growthMultiplier = 1.0f;

    // Start is called before the first frame update
    void Start()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        rb = GetComponent<Rigidbody2D>();
        polygonCollider = GetComponent<PolygonCollider2D>();
        Hide();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void FixedUpdate()
    {
        //thirstiness -= Time.fixedDeltaTime * 3.3f;

        //if (thirstiness <= 0)
        //{
        //    dead = true;
        //}

        //if (thirstiness < 0)
        //{
        //    thirstiness = 0;
        //}

        //if (beingWatered && thirstiness < 100)
        //{
        //    thirstiness += Time.fixedDeltaTime * 33.3f;

        //    if (thirstiness == 100)
        //    {
        //        beingWatered = false;
        //    }

        //    if (thirstiness > 100)
        //    {
        //        thirstiness = 100;
        //    }


        //}

        if (!isBorn)
        {
            timeUntilBirth -= Time.fixedDeltaTime;

            if (timeUntilBirth <= 0)
            {
                isBorn = true;
                Show();
            }
            else
            {
                return;
            }
        }

        if (!isPhotosynthesising)
        {
            if (!fullyGrown)
            {
                photosynthesis -= Time.fixedDeltaTime * 3.3f;
            }
        }
        else
        {
            photosynthesis += Time.fixedDeltaTime * 3.3f;
        }

        if (photosynthesis < 0)
        {
            dead = true;
        }

        if (photosynthesis < 0)
        {
            photosynthesis = 0;
        }

        if (inTheSun && photosynthesis < 100)
        {
            photosynthesis += Time.fixedDeltaTime * 33.3f;

        }        

        if (photosynthesis > 100)
        {
            photosynthesis = 100;
        }

        if (!dead)
        {
            growth += Time.fixedDeltaTime * growthMultiplier;
        }

        sunBar.sizeDelta = new Vector2(photosynthesis, sunBar.sizeDelta.y);
        growthBar.sizeDelta = new Vector2(growth / 3.0f, growthBar.sizeDelta.y);

        if (growth >= 300)
        {
            growth = 300;
            fullyGrown = true;
            leaf.SetActive(true);
        }

        //Debug.Log($"Lil dood has {thirstiness} water. Lil dood has {photosynthesis} sun.");

    }

    private void WateringDude()
    {
        beingWatered = true;
    }

    private void PlantInSun()
    {
        inTheSun = true;
    }

    private void Grow()
    {

    }

    private void Hide()
    {
        leaf.SetActive(false);
        spriteRenderer.enabled = false;
        ui.SetActive(false);
        rb.isKinematic = true;
        polygonCollider.enabled = false;
        eyes.SetActive(false);
        mouth.SetActive(false);
        spike.SetActive(false);
    }

    private void Show()
    {
        spriteRenderer.enabled = true;
        ui.SetActive(true);
        rb.isKinematic = false;
        polygonCollider.enabled = true;
        eyes.SetActive(true);
        mouth.SetActive(true);
        spike.SetActive(true);
    }

    public void Planted()
    {
        planted = true;
    }
}
