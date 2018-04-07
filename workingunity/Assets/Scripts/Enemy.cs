using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour {

    // Use this for initialization
    public int idnum;
    public ulong turretpos;
    public ulong health;
    public turret turr;
    public ulong desiredturretpos;
    void Start () {


    }
	
	// Update is called once per frame
	void Update () {
        turr.transform.eulerAngles = new Vector3(90, turretpos);
        desiredturretpos = turr.getDesired();
    }
}
