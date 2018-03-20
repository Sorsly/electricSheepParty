using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class MoveTank : MonoBehaviour {
	[SerializeField]
	Transform _destination;
	NavMeshAgent _navMeshAgent;

	// Use this for initialization
	void Start () {
		_navMeshAgent = this.GetComponent<NavMeshAgent> ();

		if (_navMeshAgent == null) {
			Debug.LogError ("nav mesh agent not attached to " + gameObject.name);
		} else {
			SetDestination();
		}
	}
	
	// Update is called once per frame
	void SetDestination () {
		if (_destination != null) {
			Vector3 targetVector = _destination.transform.position;
			_navMeshAgent.SetDestination (targetVector);
		}
	}
}
