using UnityEngine;
using System.Collections;

public class PlayerScript : MonoBehaviour {

	float speed = 0;
	float turnSpeed;
	public float speedScaling;
	public float turnSpeedScaling;
	public float flatTurnSpeed;
	public float speedCap = 9999999;
	public float turnSpeedCap = 99999999;
	public static bool alive;
	LevelManager levelManager;

	public bool rightTurnBool = false;
	public bool leftTurnBool = false;
	public bool accelerateBool = false;

	void Start(){
		levelManager = FindObjectOfType <LevelManager> ();
	}
	void Awake () {
		alive = true;
	}
	void FixedUpdate () {
		transform.Translate (Vector3.up * Time.deltaTime * speed);
		if (Input.GetKey(KeyCode.LeftArrow) || leftTurnBool == true) {
			LeftTurn ();
		}
		if (Input.GetKey(KeyCode.RightArrow) || rightTurnBool == true) {
			rightTurn ();
		}
		if (Input.GetKey (KeyCode.UpArrow) || accelerateBool == true) {
			Accelerate ();
		}
		Vector3 clampedPos = new Vector3 (Mathf.Clamp (transform.position.x, -3, 3), Mathf.Clamp (transform.position.y, -5, 5));
		transform.position = clampedPos;
	}
	void OnTriggerEnter2D(Collider2D col){
		if (col.gameObject.GetComponent <AsteroidScript> ()) {
			alive = false;
			levelManager.LoadNextLevel ();
			Destroy (gameObject);
		}
	}
	public void rightTurn(){
		transform.Rotate (0, 0, -flatTurnSpeed - turnSpeed);
	}
	public void LeftTurn(){
		transform.Rotate (0, 0, flatTurnSpeed + turnSpeed);
	}
	public void Accelerate(){
		speed += speedScaling;
		turnSpeed += turnSpeedScaling;

	}
	//arrow right turn scrip
	public void RightTurnTrue(){
		rightTurnBool = true;
	}
	public void RightTurnFalse(){
		rightTurnBool = false;
	}
	//arrow left turn scrip 
	public void LeftTurnTrue(){
		leftTurnBool = true;
	}
	public void LeftTurnFalse(){
		leftTurnBool = false;
	}
	//arrow accelerate script
	public void AccelerateTrue(){
		accelerateBool = true;
	}
	public void AccelerateFalse(){
		accelerateBool = false;
	}
	void Update(){
		speed = Mathf.Clamp(speed, 0, speedCap);
		turnSpeed = Mathf.Clamp(turnSpeed, 0, turnSpeedCap);
	}
}
