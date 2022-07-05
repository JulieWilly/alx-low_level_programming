#include "main.h"

/**
 * _isalpha - finds alphabetical letters
 * @c: a character do display the apha character
 * Return: return the alpha character
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
