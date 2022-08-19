#include "main"

/**
 * binary_to_int - function converts a binary number to an unsigned int
 * @b: parameter 1
 * Return: returns the converted number.
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}

