using System.Collections.Generic;
using UnityEngine;

public class GameObjectSaver : MonoBehaviour
{
    private Dictionary<GameObject, GameObjectData> savedData = new Dictionary<GameObject, GameObjectData>();

    public void SaveGameObjects(List<GameObject> gameObjects)
    {
        foreach (GameObject go in gameObjects)
        {
            Mesh originalMesh = null;
            if (go.TryGetComponent<MeshFilter>(out MeshFilter meshFilter))
            {
                originalMesh = meshFilter.mesh;
            }

            // Create a deep copy of the original mesh
            Mesh copiedMesh = null;
            if (originalMesh != null)
            {
                copiedMesh = Instantiate(originalMesh);
            }

            savedData[go] = new GameObjectData
            {
                position = go.transform.position,
                rotation = go.transform.rotation,
                scale = go.transform.localScale,
                mesh = copiedMesh
            };
        }
    }

    public void RestoreGameObjects()
    {
        foreach (KeyValuePair<GameObject, GameObjectData> kvp in savedData)
        {
            kvp.Key.transform.position = kvp.Value.position;
            kvp.Key.transform.rotation = kvp.Value.rotation;
            kvp.Key.transform.localScale = kvp.Value.scale;

            if (kvp.Value.mesh != null && kvp.Key.TryGetComponent<MeshFilter>(out MeshFilter meshFilter))
            {
                // Instantiate a new mesh from the saved one to ensure we don't modify the saved state
                meshFilter.mesh = Instantiate(kvp.Value.mesh);
            }
        }

        // Remove saved data
        savedData.Clear();
    }

    private class GameObjectData
    {
        public Vector3 position;
        public Quaternion rotation;
        public Vector3 scale;
        public Mesh mesh;
    }
}
