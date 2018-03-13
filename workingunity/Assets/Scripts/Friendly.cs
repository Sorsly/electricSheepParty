using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Friendly : MonoBehaviour {
    public GameObject selectionCircle;
    public bool isSelected;
    public int idnum;
    public ulong turretpos;
    public ulong health;
    Camera cam;
    public LayerMask groundLayer;
    public NavMeshAgent playerAgent;
    private NavMeshPath path;
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
        if (Input.GetMouseButtonDown(1) && isSelected == true)
        {
            playerAgent.CalculatePath(GetPointUnderCursor(), path);
            Debug.Log(path.corners[0]);
        }
    }
#endregion

    private Vector3 GetPointUnderCursor()
    {
        var ray = cam.ScreenPointToRay(Input.mousePosition);

        RaycastHit hit = new RaycastHit();

        Physics.Raycast(ray, out hit);

        return hit.point;
    }
}
