#include "main.h"
#include <strings.h>

/**
 * _strcat - function that concatinates two strings
 * @dest: string param - pointer destination 1
 * @src: string param 2 - pointer source
 * Return: returns the resulting concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		do while
		{
			a++;
			dest[i] = src[a];
			i++;
		}
		while (src[a] != '\0)
	}
	return (dest);
}
