using UnityEngine;
using System.Collections;

public class EfficientSpawnerScript : MonoBehaviour {

	bool timeToSpawn = false;
	public bool spawnerActive = true; // this is just for exploit catcher spawners. Otherwise always true.
	public GameObject asteroidPrefab;

	void Start(){
		spawnerActive = true;
		StartCoroutine (SpawnerIsActive());
//		print ("ashflashfl");
	}
		
	IEnumerator SpawnerIsActive(){
//		print ("spawning");
		float spawnWaitTime;
		while (true) {
//			print ("looping");
			spawnWaitTime = Random.Range (1, 10);
			yield return new WaitForSeconds (spawnWaitTime);
			Spawn ();
		}
		yield return null;
	}
	void Spawn(){
		GameObject asteroid = Instantiate (asteroidPrefab) as GameObject;
		asteroid.transform.parent = transform;
		asteroid.transform.position = transform.position;
		asteroid.transform.rotation = transform.rotation;
	}
}