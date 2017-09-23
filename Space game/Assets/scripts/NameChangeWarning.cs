using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class NameChangeWarning : MonoBehaviour {

	public GameObject popup;
	public Image myRaycastTarget;

	void Start(){
		UpdateWarning ();
	}

	public void NameChange(){
		if (Name.name != "" && Name.name != "(name-taken)") {
			print ("no unique name");
			popup.SetActive (true);
		} else if (Highscore.highscore != 0) {
			print ("highscore = 0");
			popup.SetActive (true);
		} 
	}
	public void UpdateWarning(){
		if (Name.name == "" && Name.name == "(name-taken)") {
			myRaycastTarget.raycastTarget = false;
		} else if (Highscore.highscore == 0) {
			myRaycastTarget.raycastTarget = false;
		} else {
			myRaycastTarget.raycastTarget = true;
		}
	}
}
