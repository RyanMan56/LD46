using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PotGrowth : MonoBehaviour
{
    public GameObject growingPlant;
    public GameObject plantToGrow;
    private DudeNeeds dudeNeeds;
    public GameObject player;

    // Start is called before the first frame update
    void Start()
    {
        growingPlant.SetActive(false);
        dudeNeeds = plantToGrow.GetComponent<DudeNeeds>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.layer == plantToGrow.layer && dudeNeeds.fullyGrown)
        {
            growingPlant.SetActive(true);
            plantToGrow.SendMessage("Planted");
            plantToGrow.SetActive(false);
            dudeNeeds.ui.SetActive(false);
            player.SendMessage("Planted");
        }
    }

    void Plant()
    {
        growingPlant.SetActive(true);
    }
}
