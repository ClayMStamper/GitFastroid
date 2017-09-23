using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;

public class LevelManager : MonoBehaviour {

	public GameObject popupArrow;

	void Start(){
		//if (autoLoadAfter == 0) {
		//	Debug.Log ("Auto load next level disabled");
		//} 
		//else if (autoLoadAfter != 0) {
		//	Invoke ("LoadNextLevel", autoLoadAfter);
		//}
	}

    public void LoadLevel(string name){
		//Debug.Log ("New Level load: " + name);
		//Application.LoadLevel (name);
		if (name == "01d_Leaderboard" || name == "02a_Play") {
			if (Name.name == "(name-taken)" || Name.name == "") { //must choose a name before going to leaderboard
				popupArrow.SetActive (true);
				return;
			}
		}
		SceneManager.LoadScene(name);
	}

	public void QuitRequest(){
		//Debug.Log ("Quit requested");
		Application.Quit ();
	}
	public void LoadNextLevel(){
		int index = SceneManager.GetActiveScene ().buildIndex;
		SceneManager.LoadScene (index + 1);
	}
}