using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using cakeslice;
namespace DynamicMeshCutter
{

    [RequireComponent(typeof(LineRenderer))]
    public class MouseBehaviour : CutterBehaviour
    {
        public LineRenderer LR => GetComponent<LineRenderer>();
        private Vector3 _from;
        private Vector3 _to;
        private bool _isDragging;
        public GameObject[] selected;

        protected override void Update()
        {
            base.Update();
            if(Input.GetMouseButtonDown(1))
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);  
                RaycastHit hit;  
                if (Physics.Raycast(ray, out hit)) {  
                    Select.Toggle(hit.collider.gameObject);
 
                    //var red = hit.collider.gameObject.GetComponent<Renderer>();
                    //Debug.Log("max:"+red.bounds.max);
                    //Debug.Log("min:"+red.bounds.min);
                }
                var roots = GameObject.FindGameObjectsWithTag("0");
            foreach (GameObject root in roots)
            {
                //Debug.Log("tag:"+root.tag+root);
                
                
            }
            }
            if (Input.GetMouseButtonDown(0))
            {
                _isDragging = true;
                var mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, Camera.main.nearClipPlane + 0.05f);
                _from = Camera.main.ScreenToWorldPoint(mousePos);
            }

            if (_isDragging)
            {
                var mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, Camera.main.nearClipPlane + 0.05f);
                _to = Camera.main.ScreenToWorldPoint(mousePos);
                VisualizeLine(true);
            }
            else
            {
                VisualizeLine(false);
            }

            if (Input.GetMouseButtonUp(0) && _isDragging)
            {
                //Slice(3);
                Slice(2);
                _isDragging = false;
            }
        }




        private void Slice(int n){
            while (GameObject.Find("plane")!=null){
                GameObject gameObject=GameObject.Find("plane");
                Destroy(gameObject,0);
            }
            if (n<2){
                //Debug.Log("n smaller than 2");
                return;
            }
            var roots = GameObject.FindGameObjectsWithTag("0");

            float minx = roots[0].GetComponent<Renderer>().bounds.min.x;
            float maxx = roots[0].GetComponent<Renderer>().bounds.max.x;
            float miny = roots[0].GetComponent<Renderer>().bounds.min.y;
            float maxy = roots[0].GetComponent<Renderer>().bounds.max.y;
            float minz = roots[0].GetComponent<Renderer>().bounds.min.z;
            float maxz = roots[0].GetComponent<Renderer>().bounds.max.z;
            foreach (GameObject root in roots)
            {
                float Xtempmin = root.GetComponent<Renderer>().bounds.min.x;
                float Xtempmax = root.GetComponent<Renderer>().bounds.max.x;
                float Ytempmin = root.GetComponent<Renderer>().bounds.min.x;
                float Ytempmax = root.GetComponent<Renderer>().bounds.max.x;
                float Ztempmin = root.GetComponent<Renderer>().bounds.min.x;
                float Ztempmax = root.GetComponent<Renderer>().bounds.max.x;
                if (Xtempmin<minx){
                    minx=Xtempmin;
                }
                if(Xtempmax>maxx){
                    maxx=Xtempmax;
                }
                if (Ytempmin<miny){
                    miny=Ytempmin;
                }
                if(Ytempmax>maxy){
                    maxy=Ytempmax;
                }if (Ztempmin<minz){
                    minz=Ztempmin;
                }
                if(Ztempmax>maxz){
                    maxz=Ztempmax;
                }

            }
            //Debug.Log("onCut"+"min:"+minx+"max:"+maxx);
            float distance=(maxx-minx)/n;
            //Plane[] planes=new Plane[n-1];
            for (int i = 0; i < n-1; i++)
            {   
                Vector3 point=new Vector3(minx+distance*(i+1),miny,minz);
                Vector3 normal=new Vector3(-1,0,0);
                AddCutPlane(point,normal);
                        //StartCoroutine(WaitOneFrame());
                //CreatePlane(new Vector3(minx+distance*(i+1),miny,minz),new Vector3(minx+distance*(i+1),miny,maxz),
                //new Vector3(minx+distance*(i+1),maxy,minz),new Vector3(minx+distance*(i+1),maxy,maxz));
            }
            
        }
        
        private void Cut()
        {
                //Debug.Log("cut");
            Plane plane = new Plane(_from, _to, Camera.main.transform.position);

            //var roots = UnityEngine.SceneManagement.SceneManager.GetActiveScene().GetRootGameObjects();
            var roots = GameObject.FindGameObjectsWithTag("0");
            foreach (GameObject root in roots)
            {
                //Debug.Log("tag:"+root.tag+root);
                if(root==null)
                    continue;
                if (!root.activeInHierarchy)
                    continue;
                var targets = root.GetComponentsInChildren<MeshTarget>();
                foreach (var target in targets)
                { 
                    Cut(target, _to, plane.normal, null);
                }
                
            }
        }
        private void CreatePlane(Vector3 a,Vector3 b,Vector3 c,Vector3 d){
            GameObject planeObject = new GameObject("Plane");

            // Add a MeshFilter component to the new GameObject
            MeshFilter meshFilter = planeObject.AddComponent<MeshFilter>();

            // Create a new mesh for the plane
            Mesh mesh = new Mesh();
            //var x= point.x;
            // Set the vertices of the mesh to define the shape of the plane
            mesh.vertices = new Vector3[]
            {
                new Vector3(a.x,a.y,a.z),
                new Vector3(b.x,b.y,b.z),
                new Vector3(c.x,c.y,c.z),
                new Vector3(d.x,d.y,d.z),

            };

            // Set the triangles of the mesh to define the faces of the plane
            mesh.triangles = new int[] { 0, 1, 2, 2, 1, 3 };

            // Recalculate the normals of the mesh to ensure proper lighting
            mesh.RecalculateNormals();

            // Assign the new mesh to the MeshFilter component
            meshFilter.mesh = mesh;

            // Add a MeshRenderer component to the new GameObject
            MeshRenderer meshRenderer = planeObject.AddComponent<MeshRenderer>();

            // Set the material of the MeshRenderer to define the appearance of the plane
            meshRenderer.material = new Material(Shader.Find("Standard"));
        }
        void OnCreated(Info info, MeshCreationData cData)
        {
           MeshCreation.TranslateCreatedObjects(info, cData.CreatedObjects, cData.CreatedTargets, Separation);
        }
        private void VisualizeLine(bool value)
        {
            if (LR == null)
                return;

            LR.enabled = value;

            if (value)
            {
                LR.positionCount = 2;
                LR.SetPosition(0, _from);
                LR.SetPosition(1, _to);
            }
        }

    }

}