using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonFunctionality : MonoBehaviour
{
    private Dictionary<string, Transform> transforms = new Dictionary<string, Transform>();
    private int sceneState = 0;
    public void OnButtonClick1()
    {
        sceneState=sceneState+1;
        if(sceneState<0){
            sceneState=0;
        }
        if(sceneState>2){
            sceneState=2;
        }
        
        Debug.Log("Button 1 clicked!");
        if (sceneState==0)
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)-0.231, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("i");
			}
			if (sceneState==1)
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)1.135, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("O");
			}
			if (sceneState==2)
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)2.898, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("P");
			}
    }
    public void OnButtonClick2()
    {
        sceneState=sceneState-1;
        if(sceneState<0){
            sceneState=0;
        }
        if(sceneState>2){
            sceneState=2;
        }
        
        Debug.Log("Button 2 clicked!");
        if (sceneState==0)
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)-0.231, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("i");
			}
			if (sceneState==1)
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)1.135, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("O");
			}
			if (sceneState==2)
            {    
				Transform cameraTransform = Camera.main.gameObject.transform;

        // Set the position and rotation of the camera
				cameraTransform.position = new Vector3((float)2.898, (float)0.746, (float)0.514);
				cameraTransform.rotation = Quaternion.Euler((float)34.541, (float)0,(float)0);
				Debug.Log("P");
			}
    }
}