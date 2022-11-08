#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - returns a pointer to a 2D array of integers
* @width: width parameter
* @height: height parameter
* Return: Null on failure
* NULL if width or height is 0
*/

int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **array;

	if (height == 0 || width == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);

	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
		return (NULL);
}
