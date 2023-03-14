#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - makes a jagged array with allocated space
 *
 * @width: the array columns
 * @height: the array rows
 *
 * Return: returns the array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0;
	int j = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
