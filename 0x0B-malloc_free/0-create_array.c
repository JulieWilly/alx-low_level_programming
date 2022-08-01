#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array.
 * @size: array size to be created.
 * @c: character an array is initilized with.
 * Return: a pointer to an arrya.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
