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
        float angle;
        if (dX == 0){
            dX = 0.00001F;
        }
        if (dX > 0 && dY > 0 ){
            angle = Mathf.Atan(dY / dX);
        }else if( dX > 0 && dY < 0){
            angle = Mathf.Atan(dY / dX) + 2*Mathf.PI;
        }else if(dX < 0 && dY > 0)
        {
            angle = Mathf.PI + Mathf.Atan(dY / dX);
        }
        else
        {
            angle = Mathf.Atan(dY / dX);
        }
        angle = Mathf.FloorToInt(angle * 180 / Mathf.PI);
        return(ulong)angle;
    }
	// Update is called once per frame
	void Update () {
        transform.position = Vector3.MoveTowards(transform.position, chassis.transform.position, 10);
    }
}
