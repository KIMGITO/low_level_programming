#include "main.h"
/**
 * alloc_grid - alloate to a 2D array
 * @width:arrays width
 * @height:array height
 * Return:success?pointer to 2D arr:0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height < 1 || width < 1)
	{
		return (0);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(arr[j]);
			free(arr);
			return (0);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
