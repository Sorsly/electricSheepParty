using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class turret : MonoBehaviour {
    public GameObject chassis;
    public GameObject target;
	// Use this for initialization
	void Start () {
		
	}
	public ulong getDesired()
    {
        float dX = target.transform.position.x - chassis.transform.position.x;
        float dY = target.transform.position.z - chassis.transform.position.z;
        dY = -dY;
        float angle;
        angle = Mathf.Atan2(dY, dX);
        angle = Mathf.FloorToInt(angle * 180 / Mathf.PI+90);
        if(angle < 0)
        {
            angle += 360;
        }


        return(ulong)angle;
    }
	// Update is called once per frame
	void Update () {
        transform.position = Vector3.MoveTowards(transform.position, chassis.transform.position, 10);
    }
}
