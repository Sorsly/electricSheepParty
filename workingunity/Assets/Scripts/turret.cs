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
        float mag = Mathf.Sqrt(dX * dX + dY * dY);
        float cross = dX * Mathf.Sin(chassis.transform.eulerAngles.y * Mathf.PI / 180) - dY * Mathf.Cos(chassis.transform.eulerAngles.y * Mathf.PI / 180);
        float angle = Mathf.Asin(cross / mag);

        angle = angle * 180 / Mathf.PI;
        Debug.Log("ANGLE FROM CROSS: " + angle.ToString());
        angle += 180;

        return(ulong)angle;
    }
	// Update is called once per frame
	void Update () {
        transform.position = Vector3.MoveTowards(transform.position, chassis.transform.position, 10);
    }
}
