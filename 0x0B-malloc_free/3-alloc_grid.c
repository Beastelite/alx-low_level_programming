#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - to make a grid the loop's nested
 * @width: data fed in
 * @height: data fed in
 * Return: pointer to 2 dimensional array of sorts
 */
int **alloc_grid(int width, int height)
{
	int **point;
	int k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	point = malloc(sizeof(int *) * height);

	if (point == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		point[k] = malloc(sizeof(int) * width);

		if (point[k] == NULL)
		{
			for (; k >= 0; k--)
				free (point[k]);

			free(point);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			point[k][l] = 0;
	}

	return (point);

}
