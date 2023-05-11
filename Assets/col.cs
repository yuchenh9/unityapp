using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DynamicMeshCutter
{
public class col : MonoBehaviour
{
    // Start is called before the first frame update
		string[] prefabnames;
		Dictionary<string, GameObject> prefabDictionary;

		public float TurnSpeed = 4.0f;      // Speed of camera turning when mouse moves in along an axis
		public float MoveSpeed = 4.0f;      // Speed of the camera going back and forth
		private List<float> positions;
		private List<GameObject> instances; 	
		GameObject bowl;
		GameObject prefab;
		//(0,-0.432,2.225)
		void addPreb(GameObject prefab){
			var position = 2.722f;
			if(positions.Count!=0){
				position=positions[positions.Count-1]+0.6f;
				//Debug.Log(position);
			}
			positions.Add(position);
			GameObject instance = Instantiate(prefab, new Vector3(position,-0.432f,2.225f), Quaternion.Euler(-89.98f,0f,180f));
            instances.Add(instance);
		}
		private float yaw = 0f;
		private float pitch = 0f;
		void Start(){
			prefabDictionary = new Dictionary<string, GameObject>();
			prefabnames=new string[] {"potato","carrot","tomato","cabbage","bell_pepper","steak","chicken_breast"};
			positions = new List<float>();
			instances = new List<GameObject>();
			bowl = Resources.Load<GameObject>("bowl");
			for (int i = 0; i < prefabnames.Length; i++)
			{
				prefab = Resources.Load<GameObject>(prefabnames[i]);
				prefabDictionary.Add(prefabnames[i], prefab);
				Debug.Log(i);
				addPreb(prefab);
			}
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
			if (Input.GetKey(KeyCode.LeftArrow))
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
			if (Input.GetKeyDown(KeyCode.L))
            {    addPreb(bowl);
			}
			if (Input.GetKey(KeyCode.RightArrow))
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)2.898, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				//Debug.Log("P");
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