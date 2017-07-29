using UnityEngine;
using System.Collections;

public class PlayerSpawner : MonoBehaviour {

	public static GameObject selectedShip;
	public GameObject[] shipsArray;

	void Awake(){
		// Debug.Log ("Playerprefs return ship: " + PlayerPrefsManager.GetSelectedShip ());
		selectedShip = GetSelectedShip ();
	}
	void Start () {
		GameObject player = Instantiate (selectedShip, transform.position, Quaternion.identity) as GameObject;
	}
	GameObject GetSelectedShip(){
		for (int i = 0; i < shipsArray.Length; i++) {
			if (shipsArray [i].name == PlayerPrefsManager.GetSelectedShip ()) {
				return shipsArray [i];
			} 
		}
		return null;
	}
}
