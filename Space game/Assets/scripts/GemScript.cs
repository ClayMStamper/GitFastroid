using UnityEngine;
using System.Collections;

public class GemScript : MonoBehaviour {

	bool movingGem = false;
	public float speed;
	int directionDecider;

	void OnTriggerEnter2D(Collider2D col){
		if (col.gameObject.GetComponent <PlayerScript> ()) {
			Debug.Log ("+ 1");
			PlayerPrefsManager.AddGems (1);
		}
		if (col.GetComponent <PlayerScript> () || col.GetComponent <AsteroidScript> () || col.GetComponent <Shredder> ()) {
			Destroy (this.gameObject);
		}
	}
	void Start(){ // just to see if the gem will move or not (odds are it wont)
		int randNum = Random.Range (1, 6);
		if (randNum == 1) {
			movingGem = true;
		} else return; // if not moving then get out of start
		speed = Random.Range (.1f, 1);
		directionDecider = Random.Range (1, 4);
	}
	void Update(){
		if (movingGem == false) return; // update will only happen if gem is moving

		if (directionDecider == 1) {
			transform.Translate (Vector3.left * Time.deltaTime * speed);
		}
		else if (directionDecider == 2) {
			transform.Translate (Vector3.up * Time.deltaTime * speed);
		}
		else if (directionDecider == 3) {
			transform.Translate (Vector3.right * Time.deltaTime * speed);
		}
		else if (directionDecider == 4) {
			transform.Translate (Vector3.down * Time.deltaTime * speed);
		}
	}
}
