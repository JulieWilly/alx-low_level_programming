#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all the elements of a string
 * @s: pointer to char parameter
 * Return: *s
 */
 char *cap_string(char *s)
{
	int i , j;
	char elements[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
			for (j = 0; elements[j] != '\0'; j++)
				if (s[i] == elements[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
