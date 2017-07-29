using UnityEngine;
using System.Collections;

public class TutorialGameDeactivator : MonoBehaviour {

	public GameObject[] objectsToDeactivate;

	// Use this for initialization
	void Start () {
		foreach (GameObject thing in objectsToDeactivate){
			thing.SetActive (false);
		}
	}
	
	public void SetActive(){
		foreach (GameObject thing in objectsToDeactivate){
			thing.SetActive (true);
		}
	}
}
