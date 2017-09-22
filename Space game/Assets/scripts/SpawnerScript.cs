using UnityEngine;
using System.Collections;

public class SpawnerScript : MonoBehaviour {
	
	bool timeToSpawn = false;
	public bool spawnerActive = true; // this is just for exploit catcher spawners. Otherwise always true.
	public float spawnEverySeconds = 1;
	public float timeDifficultyMod = 1; // not doing anything if value = 1; larger number means easier
	public GameObject asteroidPrefab;

	void start(){
		spawnerActive = true;
		asteroidPrefab = SkinManager.GetInstance ().asteroid;
	}

	void Update () {
		timeToSpawn = IsTimeToSpawn ();
		if (spawnerActive == true) {
			if (timeToSpawn == true) {
				Spawn ();
				timeToSpawn = false;
				if (spawnEverySeconds >= 1) {
					spawnEverySeconds -= timeDifficultyMod;
				}
				timeDifficultyMod -= timeDifficultyMod / 2;
			}
		}
	}
	void Spawn(){
		if (asteroidPrefab == null) {
			print (SkinManager.GetInstance ().asteroid);
			asteroidPrefab = SkinManager.GetInstance ().asteroid;
		}
		GameObject asteroid = Instantiate (asteroidPrefab) as GameObject;
		asteroid.transform.parent = transform;
		asteroid.transform.position = transform.position;
		asteroid.transform.rotation = transform.rotation;
	}
	bool IsTimeToSpawn(){
		float meanSpawnDelay = spawnEverySeconds;
		float spawnsPerSecond = 1 / (meanSpawnDelay);

		float threshold = (spawnsPerSecond * Time.deltaTime);

		if (Random.value < threshold) {
			return true;
		}
		else return false;
	}
}
