using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using cakeslice; 
namespace DynamicMeshCutter
{
	
public class col : MonoBehaviour
{
	public static void AddOutline(GameObject target)
	{
		Outline outline = target.GetComponent<Outline>();
		if(outline==null)
			outline=target.AddComponent<Outline>();
		outline.eraseRenderer=false;

		//Debug.Log("Add");

	}
	public static void RemoveOutline(GameObject target)
	{
		Outline outline = target.GetComponent<Outline>();
		if(outline==null)
			outline=target.AddComponent<Outline>();
		outline.eraseRenderer=true;

	}
    // Start is called before the first frame update
		string[] prefabnames;
		string[] mylist;
		Dictionary<string, GameObject> prefabDictionary;

		public float TurnSpeed = 4.0f;      // Speed of camera turning when mouse moves in along an axis
		public float MoveSpeed = 4.0f;      // Speed of the camera going back and forth
		private List<float> positions;
		private List<GameObject> instances; 	
		List<List<GameObject>> listOfLists;
		public List<GameObject> currentlist;
		public Queue<GameObject> qCutmeshes;
		GameObject bowl;
		GameObject prefab;

		private int cameraIndex=0;
		//(0,-0.432,2.225)
		void addPreb(GameObject prefab){
			List<GameObject> list1 = new List<GameObject>();
			var position = 2.722f;
			if(positions.Count!=0){
				position=positions[positions.Count-1]+0.6f;
				//Debug.Log(position);
			}
			positions.Add(position);
			GameObject instance = Instantiate(prefab, new Vector3(position,-0.432f,2.225f), Quaternion.Euler(-89.98f,0f,180f));
			
            list1.Add(instance);
			listOfLists.Add(list1);
			GameObject bowladded = Instantiate(bowl, new Vector3(position,-0.631f,2.225f), Quaternion.Euler(-89.98f,0f,180f));
		}
		private float yaw = 0f;
		private float pitch = 0f;
		void Start(){
			
			listOfLists = new List<List<GameObject>>();
			mylist=new string[] {"steak","steak","chicken_breast","steak"};
			qCutmeshes = new Queue<GameObject>();
			prefabDictionary = new Dictionary<string, GameObject>();
			prefabnames=new string[] {"potato","carrot","tomato","cabbage","bell_pepper","steak","chicken_breast"};
			positions = new List<float>();
			instances = new List<GameObject>();////
			bowl = Resources.Load<GameObject>("bowl");
			for (int i = 0; i < prefabnames.Length; i++)
			{
				prefab = Resources.Load<GameObject>(prefabnames[i]);
				prefabDictionary.Add(prefabnames[i], prefab);
			}
			for (int i = 0; i < mylist.Length; i++)
			{
				addPreb(prefabDictionary[mylist[i]]);
			}
			var roots = UnityEngine.SceneManagement.SceneManager.GetActiveScene().GetRootGameObjects();
            foreach (GameObject root in roots)
			{ 
				//Select.Add(root);/////
				//StartCoroutine(WaitOneFrame());

			}
			currentlist=listOfLists[0];
		}
		void RemoveAllOutlines(List<GameObject> list){
			foreach (GameObject obj in list){
				RemoveOutline(obj);
			}
		}
		void AddAllOutlines(List<GameObject> list){
			foreach (GameObject obj in list){
				AddOutline(obj);
			}
		}
		void Update()
		{//col.cs update() begin
			var camera = Camera.main.gameObject.transform;
			Vector3 move = Vector3.zero;
			
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
			if (Input.GetKeyDown(KeyCode.RightArrow))
            {     
				if(cameraIndex<(positions.Count-1)){
					cameraIndex=cameraIndex+1;
				}
				Transform cameraTransform = Camera.main.gameObject.transform;
				RemoveAllOutlines(currentlist);
				currentlist=listOfLists[cameraIndex];
				AddAllOutlines(currentlist);
        		// Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)positions[cameraIndex], (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				//Debug.Log("P");
			}
			if (Input.GetKeyDown(KeyCode.LeftArrow))
            {   
				if(cameraIndex>0){
					cameraIndex=cameraIndex-1;
				}
				Transform cameraTransform = Camera.main.gameObject.transform;
				RemoveAllOutlines(currentlist);
				currentlist=listOfLists[cameraIndex];
				AddAllOutlines(currentlist);
        		// Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)positions[cameraIndex], (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				//Debug.Log("P");
			}
			if (Input.GetMouseButton(2))
			{
				yaw += Input.GetAxis("Mouse X");
				pitch -= Input.GetAxis("Mouse Y");
				camera.eulerAngles = new Vector3(TurnSpeed * pitch, TurnSpeed * yaw, 0.0f);
			}
			//col.cs update() ends
		}

}
}