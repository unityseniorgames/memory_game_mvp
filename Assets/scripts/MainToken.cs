using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainToken : MonoBehaviour
{
	GameObject gameControl;
	SpriteRenderer spriteRenderer;
	public Sprite[] faces;
	public Sprite back;
	public int faceIndex; 
	public bool matched = false;
	public bool locked = false;


	public void OnMouseDown()
	{
		locked = gameControl.GetComponent<GameControl>().CheckLocked(faceIndex);
		if ((matched == false) && (locked == false))
		{
			if (spriteRenderer.sprite == back)
			{
				if(gameControl.GetComponent<GameControl>().TwoCardsUp() == false)
				{
					spriteRenderer.sprite = faces[faceIndex];
					gameControl.GetComponent<GameControl>().AddVisibleFace(faceIndex);
					matched = gameControl.GetComponent<GameControl>().CheckMatch();

				}
			}
			else
			{
			spriteRenderer.sprite = back;
			gameControl.GetComponent<GameControl>().RemoveVisibleFace(faceIndex);

			}
		}
	}

	private void Awake()
	{
		gameControl = GameObject.Find("GameControl");
		spriteRenderer = GetComponent<SpriteRenderer>();
	}
}
