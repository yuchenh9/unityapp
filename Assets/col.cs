using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using cakeslice; 
namespace DynamicMeshCutter
{
	
public class col : MonoBehaviour
{
	// Singleton instance
	public static col Instance { get; private set; }

	public List<GameObject> currentlist;
	private void Awake()
	{
		if (Instance != null)
		{
			Debug.LogError("More than one instance of col found!");
			return;
		}

		Instance = this;

		// Initialization of other variables...
	}
	public static void AddOutline(GameObject target)
	{
		if(target != null) // check if the target is not null
    {
		Outline outline = target.GetComponent<Outline>();
		if(outline==null)
			outline=target.AddComponent<Outline>();
		outline.eraseRenderer=false;
	}
	else 
    {
        Debug.Log("Attempted to remove outline from a null GameObject.");
    }

	}
	public static void RemoveOutline(GameObject target)
	{
		if(target != null) // check if the target is not null
		{
			Outline outline = target.GetComponent<Outline>();
			if(outline==null)
				outline=target.AddComponent<Outline>();
			outline.eraseRenderer=true;
		}else 
		{
			Debug.Log("Attempted to remove outline from a null GameObject.");
		}

	}
	
		public float TurnSpeed = 4.0f;      // Speed of camera turning when mouse moves in along an axis
		public float MoveSpeed = 4.0f;      // Speed of the camera going back and forth
		private float yaw = 0f;
		private float pitch = 0f;
		
		private int cameraIndex=0;
		//for scene init
		string[] prefabnames;
		string[] mylist;
		Dictionary<string, GameObject> prefabDictionary;
		private List<float> positions;
		List<List<GameObject>> listOfLists;
		private List<GameObject> bowls; 	
		GameObject bowl;
		GameObject prefab;
		Rigidbody rb;
		//
		public ref GameObject findAvalidGO(List<GameObject> gameObjects){
			ref GameObject referenceObject=null;
			foreach(GameObject go in gameObjects)
			{
				// Get the difference between the GameObject's position and the old location
				if(go!=null){
					referenceObject=go;
					break;
				}
			}
			if(referenceObject==null){
				Debug.Log("All gameobjs in currentlist are null");
			}
			return ref referenceObject;
		}
		
		public void TeleportGameObjects(List<GameObject> gameObjects, Vector3 newLocation)
		{
			if(gameObjects.Count == 0)
			{
				Debug.Log("No gameObjects to teleport.");
				return;
			}
			GameObject referenceObject = null;
			Vector3 oldLocation = Vector3.zero;
			referenceObject= findAvalidGO(gameObjects);
			if(referenceObject==null){
				return;
			}
			oldLocation=referenceObject.transform.position;
			foreach(GameObject go in gameObjects)
			{
				if(go!=null){
				// Get the difference between the GameObject's position and the old location
				Vector3 diff = go.transform.position - oldLocation;

				// Apply that difference to the new location
				go.transform.position = newLocation + diff;

				}
			}
		}

		//(0,-0.432,2.225)
		void addPreb(GameObject prefab){
			List<GameObject> list1 = new List<GameObject>();
			var position = 2.722f;
			if(positions.Count!=0){
				position=positions[positions.Count-1]+0.6f;
				//Debug.Log(position);
			}
			positions.Add(position);
			GameObject instance = Instantiate(prefab, new Vector3(position,-0.238f,2.225f), Quaternion.Euler(-89.98f,0f,180f));
			
            list1.Add(instance);
			listOfLists.Add(list1);
			GameObject bowladded = Instantiate(bowl, new Vector3(position,-0.419f,2.225f), Quaternion.Euler(-89.98f,0f,180f));
			
			bowls.Add(bowladded);
			
		}
		void Start(){
			//for fixedUpdata()
			animationObjectLists=new List<List<GameObject>>();
			animationTypes=new List<int>();// 0 for rigidbody, 1 for mesh only
			animationRotateAxiss=new List<Vector3>();
			rotateTargets=new List<Quaternion>();
			moveTargets=new List<Vector3>();
			animationTimes=new List<float>();
			originalGOTransform=Vector3.zero;//need init
			originalGORotation=Quaternion.identity;//need init
			originalRBTransform=Vector3.zero;//need init
			originalRBRotation=Quaternion.identity;//need init
			
			//for scene init
			bowls=new List<GameObject>();
			listOfLists = new List<List<GameObject>>();
			mylist=new string[] {"carrot","potato","carrot"};
			prefabDictionary = new Dictionary<string, GameObject>();
			prefabnames=new string[] {"potato","carrot","tomato","cabbage","bell_pepper","steak","chicken_breast"};
			positions = new List<float>();
			bowl = Resources.Load<GameObject>("bowl");
			//
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
			currentlist=listOfLists[0];
		}
		

		private float timer=0f;
		private Quaternion targetRotation;  // The target rotation to reach gradually
		private float rotationSpeed = 160.0f; // The speed at which to rotate
		private bool rbRotating=false;
		private int animationIndex = -1;

		private List<List<GameObject>> animationObjectLists;
		private List<int> animationTypes;// 0 for rigidbody, 1 for mesh only

		private List<Vector3> animationRotateAxiss;
		private List<Quaternion> rotateTargets;

		private List<Vector3> moveTargets;

		private List<float> animationTimes;
		private void SetAnimation(int index,int animationType,float time, List<GameObject> objs, Vector3 moveTarget, Quaternion rotateTarget, Vector3 rotateAxis){
			if(index>=animationTimes.Count){
				animationTimes.Add(time);
				moveTargets.Add(moveTarget);
				rotateTargets.Add(rotateTarget);
				animationRotateAxiss.Add(rotateAxis);
				animationTypes.Add(animationType);
				animationObjectLists.Add(objs);
			} else{
				animationTimes[index]=(time);
				moveTargets[index]=(moveTarget);
				rotateTargets[index]=(rotateTarget);
				animationRotateAxiss[index]=(rotateAxis);
				animationTypes[index]=(animationType);
				animationObjectLists[index]=(objs);
			}

		} 
		private Vector3 originalGOTransform;
		private Quaternion originalGORotation;
		private Vector3 originalRBTransform;
		private Quaternion originalRBRotation;
		private void initAnimation(ref float timer,GameObject go, ref Vector3 originalGOTransform, ref Vector3 originalRBTransform, ref Quaternion originalGORotation, ref Quaternion originalRBRotation){
			if(go==null){
				Debug.Log("null gameobject");
				return;
			}
			Rigidbody rb = go.GetComponent<Rigidbody>();
			if(rb==null){
				Debug.Log('null rb');
			} else {
				originalRBRotation=rb.rotation;
				originalRBTransform=rb.position;
			}
			timer=0f;
			originalGOTransform = go.transform.position;
			originalRotation = go.transform.rotation;
		}
		private void FixedUpdate()
		{
			if (animationIndex!=-1)
			{
				List<GameObject> objectList = animationObjectLists[animationIndex];
				timer += Time.fixedDeltaTime;
				if(timer>=animationTimes[animationIndex]){//if times up
					animationIndex++;
					if(animationIndex==animationTypes.Count){
						Debug.Log("end of animation");
						animationIndex=-1;
						return;
					}
					objectList = animationObjectLists[animationIndex];
					initAnimation(ref timer, objectList[0],ref originalGOTransform,ref originalRBTransform,ref originalGORotation,ref originalRBRotation);
				}
				int animationType = animationTypes[animationIndex];
				if (animationType==0)
				{	
					Rigidbody rb;
					rb=objectList[0].GetComponent<Rigidbody>();//if animationType is 0, only move one rb in a animation//null
					if(animationRotateAxiss[animationIndex]!=null){
						Vector3 rotationAxis = transform.TransformDirection(animationRotateAxiss[animationIndex]); //Vector3.forward
						// This can be changed to Vector3.right for x axis or Vector3.forward for z axis
						// Create a rotation around the rotation axis
						Quaternion differenceQuaternion = Quaternion.Inverse(originalRBRotation) * rotateTargets[animationIndex];

						// Convert the difference quaternion to an angle representation
						//float differenceAngle = Quaternion.Angle(rotation1, rotation2);
						float rotationSpeed = differenceAngle/animationTimes[animationIndex]; // The speed at which to rotate
						Quaternion rotation = Quaternion.AngleAxis(rotationSpeed * Time.fixedDeltaTime, rotationAxis);
					
						// Apply the rotation to the Rigidbody
						//(270.16, 277.12, 262.88)=(x,...,...) x++, when x==360,x=0,when x==0, bowl is D
						rb.rotation = rotation * rb.rotation;//rb
					}
				} else if(animationType==1) {
					public Vector3 targetPosition;
					public float moveSpeed = 5.0f;
					ref GameObject referenceObject = findAvalidGO(objectList);
					originalGOTransform=referenceObject.transform.position;
					Vector3 moveSpeed=(moveTargets[animationIndex]-originalGOTransform)/animationTimes[animationIndex];
					Vector3 newLocation=originalGOTransform+moveSpeed*timer;
					TeleportGameObjects(objectList,newLocation);
				}
			
			}
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
		void PutToBowl(int toIndex){//working
			currentlist.Add(bowls[cameraIndex]);
			TeleportGameObjects(currentlist,new Vector3((float)(positions[toIndex]+0.06), (float)-0.16, (float)2.225));
			currentlist.RemoveAt(currentlist.Count - 1);
			//targetRotation = Quaternion.Euler(0f, -90f, 0f);
			
			//rb=bowls[cameraIndex].GetComponent<Rigidbody>();
			List<GameObject> vessels=new List<GameObject>();
			vessels.Add(bowls[cameraIndex]);
			//rbRotating=true;
			foreach (GameObject item in currentlist)
			{
				listOfLists[toIndex].Add(item);
			}
			
			cameraIndex=toIndex;
			sceneTransition(cameraIndex);	
			SetAnimation(99,0,1f,vessels,null,Quaternion.Euler((float)34.541, (float)100,(float)90),Vector3.right);
			//SetAnimation(int index,int animationType,float time, List<GameObject> objs, Vector3 moveTarget, Quaternion rotateTarget, Vector3 rotateAxis){
		}
		void sceneTransition(int toCameraIndex){
				Transform cameraTransform = Camera.main.gameObject.transform;
				RemoveAllOutlines(currentlist);
				currentlist=listOfLists[toCameraIndex];
				AddAllOutlines(currentlist);
        		// Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)positions[toCameraIndex], (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				//Debug.Log("P");
			}
		void Update()
		{
			var camera = Camera.main.gameObject.transform;

			 //direction = Vector3.zero;

        // Check for key press and determine direction
			if (Input.GetKey(KeyCode.UpArrow))
			{


				//direction = Vector3.right;
			}
			else if (Input.GetKey(KeyCode.DownArrow))
			{
				//direction = Vector3.left;
			}
			
			if (Input.GetKey(KeyCode.O))
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;
        		// Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)1.135, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("O");
			}
			if (Input.GetKeyDown(KeyCode.P))
            {
				PutToBowl(1);
			}
			if (Input.GetKeyDown(KeyCode.RightArrow))
            {     
				//
				//Debug.Log(rb);
				if(cameraIndex<(positions.Count-1)){
					cameraIndex=cameraIndex+1;
					Debug.Log(cameraIndex);
				}
				rb = bowls[cameraIndex].GetComponent<Rigidbody>();
				sceneTransition(cameraIndex);
				//Debug.Log("P");
			}
			
			if (Input.GetKeyDown(KeyCode.LeftArrow))
            {   
				//Debug.Log(rb);
				if(cameraIndex>0){
					cameraIndex=cameraIndex-1;
					Debug.Log(cameraIndex);
				}
				rb = bowls[cameraIndex].GetComponent<Rigidbody>();
				
				sceneTransition(cameraIndex);
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
