using UnityEngine;
using System.Collections;

public class FadeInActivator : MonoBehaviour {

	public GameObject[] fadePanel;

	// Use this for initialization
	void Awake () {
		//fadePanel = FindObjectOfType <FadeIn> ();
		for (int i = 0; i < fadePanel.Length; i++) {
			fadePanel[i].SetActive (true);
		}
	}
}
