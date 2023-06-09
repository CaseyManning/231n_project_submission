using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Thrower : MonoBehaviour
{
    float cooldown = 0.5f;
    float cool = 0.5f;

    float shootspeed = 3f;

    public static Thrower main;

    public int score = 0;

    public TMP_Text scoreText;

    public GameObject ball;
    // Start is called before the first frame update
    void Start()
    {
        main = this;
    }

    // Update is called once per frame
    void Update()
    {
        cooldown -= Time.deltaTime;
        if((Input.GetMouseButton(0) || Input.touches.Length > 0) && cooldown < 0)
        {
            throwBall();
            cooldown = cool;
        }

        scoreText.text = "" + score;
    }

    void throwBall()
    {
        Vector3 pos = Input.mousePosition;
        if(Input.touches.Length > 0)
        {
            pos = Input.touches[0].position;
        }
        GameObject newball = Instantiate(ball);
        
        newball.transform.position = transform.position;
        //Vector2 direction = pos - transform.position;
        //direction.Normalize();
        Vector3 bulletVelocity = Camera.main.ScreenPointToRay(pos).direction * shootspeed;
        newball.GetComponent<Rigidbody>().velocity = bulletVelocity;
    }
}
