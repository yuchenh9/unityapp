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
	public void ReactConnected(){
		Debug.Log("unity connected");
	}
	public void ReactSlice(int n){
		MouseBehaviour.Instance.Slice(n);
	}
	public void ReactScroll (int index) {
		if(index>=positions.Count){
			Debug.Log("Error!index="+index+"positions.Count="+positions.Count);
			return;
		}
		if(index<0){
			Debug.Log("Error!index="+index);
			return;
		}
			cameraIndex=index;
			//rb = bowls[cameraIndex].GetComponent<Rigidbody>();
			Transform cameraTransform = Camera.main.gameObject.transform;
			RemoveAllOutlines(currentlist);
			currentlist=listOfLists[cameraIndex];
			AddAllOutlines(currentlist);
			
			
			// Set the position and rotation of the camera
			cameraTransform.position = new Vector3((float)positions[cameraIndex], (float)0.746, (float)0.514);
			cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
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
	
		bool hasLoaded;		
    // Start is called before the first frame update
		string[] prefabnames;
		string[] mylist2;
		Dictionary<string, GameObject> prefabDictionary;

		public float TurnSpeed = 4.0f;      // Speed of camera turning when mouse moves in along an axis
		public float MoveSpeed = 4.0f;      // Speed of the camera going back and forth
		private List<float> positions;
		private List<GameObject> instances; 	
		List<List<GameObject>> listOfLists;
		private List<GameObject> bowls; 	
		public Queue<GameObject> qCutmeshes;
		GameObject bowl;
		GameObject pan;
		GameObject prefab;
		Rigidbody rb;


		private Vector3 direction = Vector3.zero;
		private int animationIndex = -1;
		
		private string animationName;
		
		private Dictionary<string, List<List<GameObject>>> animationObjectLists;
		private Dictionary<string, List<float>> rotateDegrees;
		private Dictionary<string, List<Vector3>> animationRotateAxiss;
		private Dictionary<string, List<float>> animationTimes;
		private float timer=0f;
		private float yaw = 0f;
		private float pitch = 0f;


		private int cameraIndex=0;
		public void TeleportGameObjects(List<GameObject> gameObjects, Vector3 newLocation)
		{
			if(gameObjects.Count == 0)
			{
				Debug.Log("No gameObjects to teleport.");
				return;
			}
			GameObject referenceObject = null;
			Vector3 oldLocation = Vector3.zero;
			foreach(GameObject go in gameObjects)
			{
				// Get the difference between the GameObject's position and the old location
				if(go!=null){
					referenceObject=go;
					oldLocation= referenceObject.transform.position;
					break;
				}
			}
			if(referenceObject==null){
				Debug.Log("All gameobjs in currentlist are null");
				return;
			}
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
		void addPrefabAndBowl(GameObject prefab){
			List<GameObject> list1 = new List<GameObject>();
			var position = 2.722f;
			if(positions.Count!=0){
				position=positions[positions.Count-1]+0.6f;
			}
			positions.Add(position);
			if(prefab==null){
				Debug.Log("prefab is null");
			} else {
			GameObject instance = Instantiate(prefab, new Vector3(position,-0.238f,2.225f), Quaternion.Euler(-89.98f,0f,180f));
			
            list1.Add(instance);
			}
			listOfLists.Add(list1);
			GameObject bowladded = Instantiate(bowl, new Vector3(position,-0.419f,2.225f), Quaternion.Euler(-89.98f,0f,180f));
			
			bowls.Add(bowladded);
			
		}
		void addAnimation( string name,float time,int index=99999,float rotateDegree=0f,Vector3 rotateAxis= default){
			
			if(!animationTimes.ContainsKey(name)){
				rotateDegrees.Add(name,new List<float>());
				animationObjectLists.Add(name,new List<List<GameObject>>());
				animationRotateAxiss.Add(name,new List<Vector3>());
				animationTimes.Add(name,new List<float>());
			}
			if(index>=animationTimes[name].Count){
				rotateDegrees[name].Add(rotateDegree);
				animationObjectLists[name].Add(new List<GameObject>());
				//animationObjectLists[name][animationObjectLists[name].Count-1].Add(obj);
				animationRotateAxiss[name].Add(rotateAxis);
				animationTimes[name].Add(time);
			}
			if(index<=0){
				rotateDegrees[name].Insert(0, rotateDegree);
				animationObjectLists[name].Insert(0, new List<GameObject>());
				//animationObjectLists[name][animationObjectLists[name].Count-1].Insert(0, obj);
				animationRotateAxiss[name].Insert(0, rotateAxis);
				animationTimes[name].Insert(0, time);
			}
		}
		void Start()
		{
		hasLoaded = false;
		Debug.Log("hasLoaded set to false");

		positions=new List<float>();
		Debug.Log("positions initialized");

		bowls=new List<GameObject>();
		Debug.Log("bowls initialized");

		listOfLists = new List<List<GameObject>>();
		Debug.Log("listOfLists initialized");

		mylist2=new string[] {"carrot","steak"};
		Debug.Log("mylist2 initialized");

		bowl = Resources.Load<GameObject>("bowl");
		Debug.Log("bowl loaded");
		//pan=Resources.Load<GameObject>("pan");
		var roots = UnityEngine.SceneManagement.SceneManager.GetActiveScene().GetRootGameObjects();
		Debug.Log("roots retrieved");

		//currentlist=listOfLists[0];
		Debug.Log("currentlist set");

		rotateDegrees=new Dictionary<string, List<float>>();
		Debug.Log("rotateDegrees initialized");

		animationObjectLists=new Dictionary<string, List<List<GameObject>>>();
		Debug.Log("animationObjectLists initialized");

		animationRotateAxiss=new Dictionary<string, List<Vector3>>();
		Debug.Log("animationRotateAxiss initialized");

		animationTimes=new Dictionary<string, List<float>>();
		Debug.Log("animationTimes initialized");

		addAnimation(time:0.6f,name:"put",rotateDegree:130f,rotateAxis:Vector3.forward);
		Debug.Log("First animation added");

		addAnimation(time:0.3f,name:"put",rotateDegree:-130f,rotateAxis:Vector3.forward);
		Debug.Log("Second animation added");
		}

		
		
		private void FixedUpdate()
		{
			if(animationIndex!=-1){
				
				timer += Time.fixedDeltaTime;
				Debug.Log(animationName+animationIndex);
				Debug.Log(animationTimes==null);
				//Debug.Log("b"+animationTimes[animationName][animationIndex]);
				if(timer>=animationTimes[animationName][animationIndex]){//init
					animationIndex++;
					timer=0f;
					if(animationIndex==animationObjectLists[animationName].Count){
						Debug.Log("end of animation");
						animationIndex=-1;
						return;
					}
					
				}
				//rb=animationObjectLists[animationName][animationIndex][0].GetComponent<Rigidbody>();//init
				
				float rotationSpeed=rotateDegrees[animationName][animationIndex]/animationTimes[animationName][animationIndex];//init

				Vector3 rotationAxis = transform.TransformDirection(animationRotateAxiss[animationName][animationIndex]); 
				
				Quaternion rotation = Quaternion.AngleAxis(rotationSpeed * Time.fixedDeltaTime, rotationAxis);

				//(270.16, 277.12, 262.88)=(x,...,...) x++, when x==360,x=0,when x==0, bowl is D
				rb.rotation = rotation * rb.rotation;
				//Debug.Log(rb.rotation.eulerAngles.x);//the logged result is (-0.58886, 0.39124, 0.39138, -0.58907)
				
				
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
		void PutToBowl(int toIndex){
			currentlist.Add(bowls[cameraIndex]);
			TeleportGameObjects(currentlist,new Vector3((float)(positions[toIndex]+0.06), (float)-0.16, (float)2.225));
			currentlist.RemoveAt(currentlist.Count - 1);
			Transform cameraTransform = Camera.main.gameObject.transform;
			cameraTransform.position = new Vector3((float)(positions[toIndex]), (float)0.946, (float)0.514);
			cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
			rb=bowls[cameraIndex].GetComponent<Rigidbody>();
			foreach (GameObject item in currentlist)
			{
				listOfLists[toIndex].Add(item);
			}

			animationName="put";
			animationIndex=0;
			
			RemoveAllOutlines(currentlist);
			currentlist=listOfLists[toIndex];
			AddAllOutlines(currentlist);
			cameraIndex=toIndex;
			}
		void Update()
		{
			if (!hasLoaded && (BundleLoader.Instance?.IsLoaded ?? false))
			{
				for (int i = 0; i < mylist2.Length; i++)
				{
					addPrefabAndBowl(BundleLoader.Instance.Prefabs[mylist2[i]]);
				}
				hasLoaded = true;
			}
				
        

			var camera = Camera.main.gameObject.transform;

			 direction = Vector3.zero;

        // Check for key press and determine direction
			if (Input.GetKey(KeyCode.UpArrow))
			{
				direction = Vector3.right;
			}
			else if (Input.GetKey(KeyCode.DownArrow))
			{
				direction = Vector3.left;
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
				PutToBowl(cameraIndex+1);
			}
			if (Input.GetKeyDown(KeyCode.RightArrow))
            {     
				//Debug.Log(rb);
				if(cameraIndex<(positions.Count-1)){
					cameraIndex=cameraIndex+1;
					Debug.Log(cameraIndex);
				}
				//rb = bowls[cameraIndex].GetComponent<Rigidbody>();
				Transform cameraTransform = Camera.main.gameObject.transform;
				RemoveAllOutlines(currentlist);
				currentlist=listOfLists[cameraIndex];
				AddAllOutlines(currentlist);
				
				foreach (GameObject item in currentlist)
				{
					Debug.Log(item);
				}
        		// Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)positions[cameraIndex], (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
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
			if (Input.GetMouseButtonUp(0))
            {
                //Slice(3);
                ReactSlice(6);
                //_isDragging = false;
            }
		}

}
}