using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;

public class Arrow : MonoBehaviour {

	GameObject player;
	PlayerScript playerScript;
	EventTrigger click;

	// Use this for initialization
	void Start () {
		player = FindObjectOfType <PlayerScript> ().gameObject;
		playerScript = FindObjectOfType <PlayerScript> ();
		click = GetComponent <EventTrigger> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (player == null) {
			player = FindObjectOfType <PlayerScript> ().gameObject;
		} 
		if (playerScript == null) {
			playerScript = FindObjectOfType <PlayerScript> ();
		} else
			return;
	}
	public void RightTurnTrue(){
		playerScript.rightTurnBool = true;
	}
	public void RightTurnFalse(){
		playerScript.rightTurnBool = false;
	}
	//arrow left turn scrip 
	public void LeftTurnTrue(){
		playerScript.leftTurnBool = true;
	}
	public void LeftTurnFalse(){
		playerScript.leftTurnBool = false;
	}
	//arrow accelerate script
	public void AccelerateTrue(){
		playerScript.accelerateBool = true;
	}
	public void AccelerateFalse(){
		playerScript.accelerateBool = false;
	}
}
