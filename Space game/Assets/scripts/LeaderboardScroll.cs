using UnityEngine;
using System.Collections;

public class LeaderboardScroll : MonoBehaviour {

	public Vector3 velocity = Vector3.zero;
	Vector3 panelPos;
	Vector3 newPos;
	Vector3 mouseDelta;
	Vector3 startPos = Vector3.zero;
	public float topScrollClamp;

	void Start () {

	}
	void Update () {
		if (velocity.y >= 0)
			velocity.y -= Time.deltaTime;
		else if (velocity.y < 0)
			velocity.y += Time.deltaTime;
		if (velocity.y < 0.02f && velocity.y > -0.02) {
			velocity.y = 0;
		}
		panelPos = transform.position;
		newPos.y = Mathf.Clamp (panelPos.y + velocity.y * Time.deltaTime, -5, topScrollClamp);
	}
	void FixedUpdate (){
		transform.position = newPos;
	}
	void OnMouseDown(){
		startPos = Vector3.zero;
		startPos.y = Input.mousePosition.y;
	}
	void OnMouseDrag(){
		mouseDelta = Camera.main.ScreenToViewportPoint(Input.mousePosition - startPos);
		velocity = mouseDelta * 6;
	}
}