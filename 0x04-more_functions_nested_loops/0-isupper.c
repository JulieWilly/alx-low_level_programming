#include "main.h"

/**
 * _isupper - function checks for upper case alphabets
 * @c: integer parameter
 * Return: something but success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
