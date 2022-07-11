#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: parameter for the print_rev
 */
void print_rev(char *s)
{
	int n, i;

	n = 0;
	while (s[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
