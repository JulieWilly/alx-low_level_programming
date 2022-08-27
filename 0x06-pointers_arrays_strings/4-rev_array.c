#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @a: pointer to parameter
 * @n: int param
 * Return: empty
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[j];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
