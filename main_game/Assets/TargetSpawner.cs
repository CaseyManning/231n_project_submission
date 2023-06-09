using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetSpawner : MonoBehaviour
{
    public float waittime;
    public float spaceRange;

    public GameObject target;

    public static TargetSpawner main;

    // Start is called before the first frame update
    void Start()
    {
        //StartCoroutine(spawnLoop());
        main = this;
        spawn();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator spawnLoop()
    {
        while(true)
        {
            yield return new WaitForSeconds(waittime);
            spawn();
        }
    }

    public void spawn()
    {
        GameObject targ = Instantiate(target);

        Vector3 pos;
        while(true)
        {
            pos = new Vector3((Random.value - 0.5f) * spaceRange, (Random.value) * spaceRange/3, (Random.value - 0.5f) * spaceRange);

            if(Physics.Raycast(pos, Camera.main.transform.position, out RaycastHit hit))
            {
                if(!(Vector3.Distance(pos, hit.point) < Vector3.Distance(pos, Camera.main.transform.position) && hit.collider.gameObject.CompareTag("MeshPart")))
                {
                    break;
                }
           } else
            {
                if (Vector3.Distance(Camera.main.transform.position, pos) > 2)
                {
                    break;
                }
            }
        }
        targ.transform.position = pos;
        targ.transform.LookAt(Camera.main.transform.position);
    }
}
