using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void die()
    {
        StartCoroutine(shrink());
    }

    IEnumerator shrink()
    {
        float scale = transform.localScale.x;
        float curr = 1f;
        while(true)
        {
            curr -= Time.deltaTime / 0.3f;
            transform.localScale = new Vector3(curr * scale, curr * scale, curr * scale);
            if(curr < 0.01f)
            {
                Destroy(gameObject);
                break;
            }
            yield return new WaitForEndOfFrame();
        }
    }
}