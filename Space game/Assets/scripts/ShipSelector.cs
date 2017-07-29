using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ShipSelector : MonoBehaviour {

	public GameObject selectedPanel;
	bool selected = false;

	void Start(){
		
		selected = false;
		selectedPanel.SetActive (false);
		if (PlayerPrefsManager.GetSelectedShip () == gameObject.name) {
			selected = true;
		}
		if (selected == true) {
			selectedPanel.SetActive (true);
		}
	}
	void Update(){ // consider revising
		if (PlayerPrefsManager.GetSelectedShip () == gameObject.name) {
			selected = true;
		} else {
			selected = false;
		}
		if (selected == true) {
			selectedPanel.SetActive (true);
		} else {
			selectedPanel.SetActive (false);
		}
	}
	public void Select(){
		PlayerPrefsManager.SetSelectedShip (gameObject.name);
	}
}
