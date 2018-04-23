using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Friendly : MonoBehaviour {
    public GameObject selectionCircle;
    public bool isSelected;
    public bool fire;
    public int idnum;
    public ulong turretpos;
    public ulong desiredturretpos;
    public ulong health;
    Camera cam;
    public LayerMask groundLayer;
    public NavMeshAgent playerAgent;
    private NavMeshPath path;
    public turret turr;
    public GameObject hovertext;
    #region Monobehavior API
    void Awake()
    {
        cam = Camera.main;
        path = new NavMeshPath();
    }
    // Use this for initialization
    void Start () {
		
	}

    // Update is called once per frame
    void Update()
    {
       
        desiredturretpos = turr.getDesired();
        if (Input.GetMouseButtonDown(1) && isSelected == true)
        {
            playerAgent.CalculatePath(GetPointUnderCursor(), path);
        }
        if (Input.GetMouseButtonDown(0) && isSelected == true && SelectedEnemy())
        {
            playerAgent.CalculatePath(intersectPath(5), path);
        }
        Debug.Log("Actual");
        Debug.Log(transform.position);
    }
#endregion
    private Vector3 intersectPath(float enemDist)
    {
        float dY = turr.target.transform.position.y - transform.position.y;
        float dX = turr.target.transform.position.x - transform.position.x;
        float theta = Mathf.Atan(dY / dX);
        float mag = Mathf.Sqrt(dY * dY + dX * dX);
        Vector3 retpoint;
        retpoint.x = Mathf.Cos(theta) * (mag - enemDist) + turr.target.transform.position.x;
        retpoint.z = Mathf.Sin(theta) * (mag - enemDist) + turr.target.transform.position.y;
        retpoint.y = transform.position.y;
        return retpoint;
    }
    public NavMeshPath pathS()
    {
        return path;    
    }
    private bool SelectedEnemy()
    {
        RaycastHit hitInfo = new RaycastHit();
        bool hit = Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hitInfo);
        if (hit && hitInfo.transform.gameObject.layer == 10)
        {
            Debug.Log("Selected Enemy");
            turr.target = hitInfo.transform.gameObject;
            return true;
        }
        Debug.Log("Not Selected Anything");
        return false;
    }
    private Vector3 GetPointUnderCursor()
    {
        var ray = cam.ScreenPointToRay(Input.mousePosition);

        RaycastHit hit = new RaycastHit();

        Physics.Raycast(ray, out hit);

        return hit.point;
    }
}
