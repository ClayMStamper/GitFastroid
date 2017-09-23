using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class Arrow : MonoBehaviour {

	GameObject player;
	public Image arrowSprite;
	PlayerScript playerScript;
	EventTrigger click;

	// Use this for initialization
	void Start () {
//		player = FindObjectOfType <PlayerScript> ().gameObject;
		playerScript = FindObjectOfType <PlayerScript> ();
		click = GetComponent <EventTrigger> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (player != null)
			return;
		if (player == null) {
			player = FindObjectOfType <PlayerScript> ().gameObject;
		} 
		if (playerScript == null) {
			playerScript = FindObjectOfType <PlayerScript> ();
		} else
			return;
	}
	public void RightTurnTrue(){
		arrowSprite.color = Color.grey;
		playerScript.rightTurnBool = true;
	}
	public void RightTurnFalse(){
		arrowSprite.color = Color.white;
		playerScript.rightTurnBool = false;
	}
	//arrow left turn scrip 
	public void LeftTurnTrue(){
		arrowSprite.color = Color.grey;
		playerScript.leftTurnBool = true;
	}
	public void LeftTurnFalse(){
		arrowSprite.color = Color.white;
		playerScript.leftTurnBool = false;
	}
	//arrow accelerate script
	public void AccelerateTrue(){
		arrowSprite.color = Color.grey;
		playerScript.accelerateBool = true;
	}
	public void AccelerateFalse(){
		arrowSprite.color = Color.white;
		playerScript.accelerateBool = false;
	}
}
