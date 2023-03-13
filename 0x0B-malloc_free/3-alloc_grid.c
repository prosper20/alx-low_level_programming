#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: Pointer to the newly created 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **array2D;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	array2D = malloc(height * sizeof(int *));
	if (array2D == NULL)
	{
		free(array2D);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array2D[i] = malloc(width * sizeof(int));
		if (array2D[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array2D[i]);
			free(array2D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array2D[i][j] = 0;

	return (array2D);
}
