using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ShipStatsManager : MonoBehaviour {

	public GameObject parent;
	public GameObject[] ships;
	public GameObject[] statsArray;
	public Slider accelerationSlider;
	public Slider handelingSlider;
	public Slider versatilitySlider;
	GameObject myShip;


	void Start () {
		myShip = GetParentShipPrefab ();
//		Debug.Log (myShip);
		accelerationSlider.value = myShip.GetComponent <PlayerScript> ().speedScaling;
		handelingSlider.value = myShip.GetComponent <PlayerScript> ().flatTurnSpeed;
		versatilitySlider.value = myShip.GetComponent <PlayerScript> ().turnSpeedScaling;
		Vector3 newPos = parent.transform.position;
		newPos.y -= .2f;
		transform.position = newPos;
	}

	void Update () {
		if (parent.GetComponentInChildren <ShipLock> ()) {
			if (parent.GetComponentInChildren <ShipLock> ().isUnlocked == 0) { // is locked (numbers are weird but made pragmatic sense)
				foreach (GameObject child in statsArray) {
					//child.gameObject.SetActive (false);
				}
			} else { // is shiplock returns unlocked
				foreach (GameObject child in statsArray) {
					child.gameObject.SetActive (true);
				}
			}
			return;
		} 
		foreach (GameObject child in statsArray) {
				child.SetActive (true);	
		}
	}

	GameObject GetParentShipPrefab(){
		for (int i = 0; i < ships.Length; i++) {
			if (ships [i].name == parent.name) {
				return ships [i];
			} 
		}
		return null;
	}
}
