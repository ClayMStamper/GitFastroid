using UnityEngine;
using System.Collections;

public class GemSpawner : MonoBehaviour {

	public GameObject gem;
	private float randX;
	private float randY;
	public float rareness;
	public int totalGemsSpawned;

	void Start(){
		rareness = 15;
		StartCoroutine (StartSpawning());
	}

	public IEnumerator StartSpawning(){
		while (true) {
			yield return new WaitForSeconds (Random.Range (0, rareness));
			rareness -= Time.timeSinceLevelLoad / 20;
			rareness = Mathf.Clamp (rareness, 2f, 30);
			if (Random.value >= 0.5f) {
				totalGemsSpawned++;
				print (totalGemsSpawned);
				Spawn ();
			}
		}
		yield return null;
	}

	public void Spawn(){
		randX = Random.Range (-2.75f, 2.75f);
		randY = Random.Range (-5, 5);
		Vector3 gemPos = new Vector3 (randX, randY, 0);
		GameObject newGem = Instantiate (gem, gemPos, Quaternion.identity) as GameObject;
	}
}
