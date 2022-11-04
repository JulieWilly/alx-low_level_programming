#include "main.h"

/**
 * leet - transform to leet
 * @s: char array type
 * Return: transformed s
 */

char *leet(char *s)
{
	int i, ii;
	char s1[] = "james";
	char S1[] = "JAMES";
	char s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
			if (s[i] == s1[ii] || s[i] == S1[ii])
				s[i] = s1[ii];
				break;
	}
	return (s);
}


