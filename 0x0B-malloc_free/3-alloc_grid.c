#include "main.h"

/**
 * alloc-grid - function that allocates a two dimensional array
 * @width: width of the array.
 * @height: height of thwe array.
 * Return: a pointer allocated to the array.
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (0);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(widht * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			a[k][l] = 0;
	}
	return (a);
}
