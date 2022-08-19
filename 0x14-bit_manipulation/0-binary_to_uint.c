#include "main"

/**
 * binary_to_int - function converts a binary number to an unsigned int
 * @b: parameter 1
 * Return: returns the converted number.
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int j = 1;
	unsigned int k = 0;
	int c;
	unsigned int len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (c = len -1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			k += j;
		}
		k *= 2;
	}
	return (k);
}

