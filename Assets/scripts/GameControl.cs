using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameControl : MonoBehaviour
{

	GameObject token;
	List<int> faceindexes = new List<int> {0,1,2,3,0,1,2,3};
	public static System.Random rnd = new System.Random();
	public int shuffleNum = 0;
	int[] visibleFaces = {-1, -2};
	List<int> lockedindexes = new List<int>();
 
	
	void Start()
	{	
		int originalLength = faceindexes.Count;
		float yPosition = 2.3f;
		float xPosition = -2.2f;
		for (int i =0; i<7; i++)
		{
			shuffleNum = rnd.Next(0,(faceindexes.Count));
			var temp = Instantiate(token, new Vector3(
				xPosition, yPosition, 0),
				Quaternion.identity);
			temp.GetComponent<MainToken>().faceIndex = faceindexes[shuffleNum];
			faceindexes.Remove(faceindexes[shuffleNum]);
			xPosition = xPosition + 4;
			if (i == (originalLength/2 - 2))
			{
				yPosition = -2.3f;
				xPosition = -6.2f;
			}		
		}
		token.GetComponent<MainToken>().faceIndex = faceindexes[0];
	}

	public bool TwoCardsUp()
	{
		bool cardsUp = false;
		if(visibleFaces[0] >= 0 && visibleFaces[1] >= 0)
		{
			cardsUp = true;
		}
		return cardsUp;
	}

	public void AddVisibleFace (int index)
	{
		if(visibleFaces[0] == -1)
		{
			visibleFaces[0] = index;
		}
		else if (visibleFaces[1] == -2)
		{
			visibleFaces[1] = index;
		}
	}

	public void RemoveVisibleFace (int index)
	{
		if(visibleFaces[0] == index)
		{
			visibleFaces[0] = -1;
		}
		else if (visibleFaces[1] == index)
		{
			visibleFaces[1] = -2;
		}
	}

	public bool CheckMatch()
	{
		bool success = false;
		if (visibleFaces[0] == visibleFaces[1])
		{
			lockedindexes.Add(visibleFaces[0]);
			visibleFaces[0] = -1;
			visibleFaces[1] = -2;
			success = true;
			
		}
		return success;
	}

	public bool CheckLocked(int index)
	{
		bool locked = false;

		if (lockedindexes.Contains(index))
		{
				locked = true;
		}
	
		return locked;
	}

	private void Awake()
	{
		token = GameObject.Find("Token");
	}

}
