using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using System;

public class Selectable : MonoBehaviour, ISelectHandler, IPointerClickHandler, IDeselectHandler {

	public static HashSet<Selectable> allSelectables = new HashSet<Selectable>();
	public static HashSet<Selectable> currentlySelected = new HashSet<Selectable>();

	Renderer myRenderer;

	[SerializeField]
	Material unselectedMaterial;
	[SerializeField]
	Material selectedMaterial;

	void Awake()
	{
		allSelectables.Add(this);
		myRenderer = GetComponent<Renderer>();
	}


	public void OnPointerClick(PointerEventData eventData)
	{
		if (!Input.GetKey(KeyCode.LeftControl) && !Input.GetKey(KeyCode.RightControl))
		{
			DeselectAll(eventData);
		}
		OnSelect(eventData);
	}

	public void OnSelect(BaseEventData eventData)
	{
		currentlySelected.Add(this);
		myRenderer.material = selectedMaterial;
	}

	public void OnDeselect(BaseEventData eventData)
	{
		myRenderer.material = unselectedMaterial;
	}

	public static void DeselectAll (BaseEventData eventData)
	{
		foreach(Selectable selectable in currentlySelected)
		{
			selectable.OnDeselect(eventData);
		}
		currentlySelected.Clear();
	}
}