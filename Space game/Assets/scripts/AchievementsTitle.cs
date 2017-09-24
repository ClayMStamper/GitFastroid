using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class AchievementsTitle : MonoBehaviour {

	public Scrollbar AchievementSlider;
	public Text AchievementTitle;
	public GameObject leftArrow, rightArrow;

	public void Start () {
		//AchievementTitle = GetComponent <Text> ();
//		print ( AchievementSlider.value);
		if (AchievementSlider.value <= 0) {
			AchievementTitle.text = "Background Skins";
			leftArrow.SetActive (false);
			rightArrow.SetActive (true);
		} else if (AchievementSlider.value == 0.5f) {
			leftArrow.SetActive (true);
			rightArrow.SetActive (true);
			AchievementTitle.text = "Asteroid Skins";
//			print ("working");
		} else {
			leftArrow.SetActive (true);
			rightArrow.SetActive (false);
			AchievementTitle.text = "Gem Skins";
		}
	}
}
