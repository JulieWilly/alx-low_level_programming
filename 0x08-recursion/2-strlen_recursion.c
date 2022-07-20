#include "main.h"

/**
 * _strlen_recursion - function that prints the length of a string
 * @s: string s
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
