using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DynamicMeshCutter
{
public class col : MonoBehaviour
{
    // Start is called before the first frame update

		public float TurnSpeed = 4.0f;      // Speed of camera turning when mouse moves in along an axis
		public float MoveSpeed = 4.0f;      // Speed of the camera going back and forth

		private float yaw = 0f;
		private float pitch = 0f;
		void Start(){
			var roots = UnityEngine.SceneManagement.SceneManager.GetActiveScene().GetRootGameObjects();
            foreach (GameObject root in roots)
			{ 
				Select.Add(root);
				//StartCoroutine(WaitOneFrame());

			}
		}
		void Update()
		{
			var camera = Camera.main.gameObject.transform;
			Vector3 move = Vector3.zero;
			/*
			if (Input.GetKey(KeyCode.W))
                Debug.Log("W");
				move += MoveSpeed / 100f * Vector3.forward;
			if (Input.GetKey(KeyCode.S))
                Debug.Log("s");
				move += MoveSpeed / 100f * Vector3.back;
			if (Input.GetKey(KeyCode.A))
                Debug.Log("a");
				move += MoveSpeed / 100f * Vector3.left;
			if (Input.GetKey(KeyCode.D))
                Debug.Log("d");
				move += MoveSpeed / 100f * Vector3.right;
			if (Input.GetKey(KeyCode.Q))
                Debug.Log("q");
				move += MoveSpeed / 100f * Vector3.down;
			if (Input.GetKey(KeyCode.E))
                Debug.Log("e");
				move += MoveSpeed / 100f * Vector3.up;

			if (Input.GetKey(KeyCode.LeftShift))
				move *= 5;

			if (Mathf.Abs(move.sqrMagnitude) > Mathf.Epsilon)
				camera.Translate(move, Space.Self);
*/
			if (Input.GetKey(KeyCode.I))
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)-0.231, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("i");
			}
			if (Input.GetKey(KeyCode.O))
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)1.135, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("O");
			}
			if (Input.GetKey(KeyCode.P))
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)2.898, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("P");
			}
			if (Input.GetMouseButton(2))
			{
				yaw += Input.GetAxis("Mouse X");
				pitch -= Input.GetAxis("Mouse Y");
				camera.eulerAngles = new Vector3(TurnSpeed * pitch, TurnSpeed * yaw, 0.0f);
			}
		}

}
}