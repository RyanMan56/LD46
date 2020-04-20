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
    float growth = 0;
    

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void FixedUpdate()
    {
        thirstiness -= Time.fixedDeltaTime * 3.3f;

        if (thirstiness <= 0)
        {
            dead = true;
        }

        if (thirstiness < 0)
        {
            thirstiness = 0;
        }

        if (beingWatered && thirstiness < 100)
        {
            thirstiness += Time.fixedDeltaTime * 33.3f;

            if (thirstiness == 100)
            {
                beingWatered = false;
            }

            if (thirstiness > 100)
            {
                thirstiness = 100;
            }


        }

        photosynthesis -= Time.fixedDeltaTime * 3.3f;
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

            if (photosynthesis == 100)
            {
                inTheSun = false;
            }

            if (photosynthesis > 100)
            {
                photosynthesis = 100;
            }

            
        }

        growth += Time.fixedDeltaTime;

        if (growth >= 300)
        {

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
}
