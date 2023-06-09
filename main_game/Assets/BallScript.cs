using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallScript : MonoBehaviour
{

    bool bounced = false;
    public Material bmat;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.CompareTag("Target") && bounced)
        {
            Thrower.main.score += 1;
            TargetSpawner.main.spawn();
            other.gameObject.GetComponent<TargetScript>().die();
            Destroy(gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("MeshPart"))
        {
            bounced = true;
            GetComponent<MeshRenderer>().material = bmat;
        }
    }
}
