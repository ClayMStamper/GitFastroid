using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class AchievementsTitle : MonoBehaviour {

	public Scrollbar AchievementSlider;
	public Text AchievementTitle;

	public void Start () {
		//AchievementTitle = GetComponent <Text> ();
//		print ( AchievementSlider.value);
		if (AchievementSlider.value <= 0) {
			AchievementTitle.text = "Background Skins";
		} else if (AchievementSlider.value == 0.5f) {
			AchievementTitle.text = "Asteroid Skins";
//			print ("working");
		} else {
			AchievementTitle.text = "Gem Skins";
		}
	}
}
