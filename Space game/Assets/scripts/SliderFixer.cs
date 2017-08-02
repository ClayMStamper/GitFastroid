using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SliderFixer : MonoBehaviour {

	public Slider[] sliders;

	void Start(){
		sliders = FindObjectsOfType <Slider> ();
		foreach (Slider slider in sliders) {
			slider.interactable = false;
		}
	}
}
