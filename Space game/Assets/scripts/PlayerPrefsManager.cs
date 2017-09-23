using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class PlayerPrefsManager : MonoBehaviour {

	//highscore
	public static void SetHighScore(float highscore){
		PlayerPrefs.SetFloat ("highscore", highscore);
	}
	public static float GetHighScore(){
		return PlayerPrefs.GetFloat ("highscore");
	}

	//instructions (depricated)
	public static void SetInstructionsShown(int shown){ // bool: 0 for true, 1 for false
		PlayerPrefs.SetInt ("shown", shown);
	}
	public static int GetInstructionsShown(){
		return PlayerPrefs.GetInt ("shown");
	}

	// money
	public static void AddMoney (float money){
		PlayerPrefs.SetInt ("money", (int)(money + GetMoney ())); // takes in a float, time and adds it to current money
	}
	public static int GetMoney (){
		return PlayerPrefs.GetInt ("money");
	}

	// gems
	public static void AddGems (int gems){
		PlayerPrefs.SetInt ("gems", gems + GetGems ()); // adds new gems to current gems
	}
	public static int GetGems (){
		return PlayerPrefs.GetInt ("gems");
	}

	//volume
	public static void SetMasterVolume(float volume){
		PlayerPrefs.SetFloat ("volume", volume);
	}
	public static float GetMasterVolume(){
		return PlayerPrefs.GetFloat ("volume");
	}

	//selected ship
	public static void SetSelectedShip(string shipName){
		PlayerPrefs.SetString ("ship", shipName);
	}
	public static string GetSelectedShip(){
		return PlayerPrefs.GetString ("ship");
	}

	//unlock ships
	public static void UnlockShip (string shipName, int booleanInt){
		PlayerPrefs.SetInt (shipName, booleanInt);
	}
	public static int GetShipLockStatus (string shipName){
		return PlayerPrefs.GetInt (shipName);
	}

	//save name
	public static void SetName(string name){
		PlayerPrefs.SetString ("name", name);
	}
	public static string GetName(){
		return PlayerPrefs.GetString ("name");
	}
	// one time popups
	public static void SetInfoPopupShown (string key, int shown){
		PlayerPrefs.SetInt (key, shown);
	}
	public static int GetInfoPopupShown (string key){
		return PlayerPrefs.GetInt (key);
	}

	public static void SetHighScoreAlreadyReset(){ //players get 1 free reset
		PlayerPrefs.SetInt ("highscorereset", 1);
	}
	public static int GetIfHighScoreAlreadyReset(){
		return PlayerPrefs.GetInt ("highscorereset");
	}
	public static void SetPopUpShown(string name){
		PlayerPrefs.SetInt (name, 1);
	}
	public static int GetPopUpShown(string name){
		return PlayerPrefs.GetInt (name);
	}
	public static void SetNameClaimed (string key){
		print ("claiming " + key);
		PlayerPrefs.SetInt (key, 1); // takes in string + "KEY" as parameter
	}
	public static int GetIsNameClaimed (string key){
		print ("checking " + key + "KEY for claimed");
		return PlayerPrefs.GetInt (key + "KEY");
	}
}
