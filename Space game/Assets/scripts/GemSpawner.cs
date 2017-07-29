using UnityEngine;
using System.Collections;

public class GemSpawner : MonoBehaviour {

	public GameObject gem;
	private float randX;
	private float randY;
	public float rareness;
	int rarenessMod;

	void Start () {
	
	}

	void FixedUpdate () { // fixed so that I don't penalize low frame rate players
		int randNum = Random.Range (0, rarenessMod);
		if (randNum == 1) { //arbitrary value. Just used to simulate randomness
			Spawn ();
		}
		Debug.Log (rarenessMod);
		rarenessMod = Mathf.Clamp (((int)(rareness - Score.score * 10)),100, 1500);
	}
	public void Spawn(){
		randX = Random.Range (-3, 3);
		randY = Random.Range (-5, 5);
		Vector3 gemPos = new Vector3 (randX, randY, 0);
		GameObject newGem = Instantiate (gem, gemPos, Quaternion.identity) as GameObject;
	}
}
