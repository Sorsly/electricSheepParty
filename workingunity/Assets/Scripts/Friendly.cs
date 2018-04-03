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
        Debug.Log(desiredturretpos);
        Debug.Log("ruijofrera");
        if (Input.GetMouseButtonDown(1))// && isSelected == true)
        {
            Debug.Log("button pressed");
            playerAgent.CalculatePath(GetPointUnderCursor(), path);
            Debug.Log(BotPath());
            path.corners[0] = BotPath();
        }
        //if (Input.GetMouseButtonDown(0) && isSelected == true && SelectedEnemy())
        //{
        //    playerAgent.CalculatePath(intersectPath(5), path);
        //}

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

    public Vector3 BotPath()
    {
        Vector3 back;
        Vector3 dest = GetPointUnderCursor();
        float currx = transform.position.x;
        float currz = transform.position.z;
        back.x = dest.x - currx;
        back.z = dest.z - currz;
        back.y = 0;
        return back;
    }
}
