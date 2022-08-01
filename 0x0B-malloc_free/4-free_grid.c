#include "main.h"

/**
 * free_grid - function that removes allocation of another function
 * @grid: grid to be freed
 * @height: heigh to the matrix.
 * Return: no return item.
 */ 
void free_grid(int **grid, int height)
{
	int i;
    
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
