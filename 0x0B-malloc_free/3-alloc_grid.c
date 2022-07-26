#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - entery point
 *
 * @width: row matrix
 *
 * @height: column of string
 *
 * Return: a pointer to a 2 dm array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p = matrix[i];
		free(p);
	}
	free(martix);
	return (NULL);
}
}
for (l = 0; l < height; l++)
{
	for (j = 0; j < width; j++)
	{
		matrix[i][j] = 0;
	}
}
return (matrix);
}
