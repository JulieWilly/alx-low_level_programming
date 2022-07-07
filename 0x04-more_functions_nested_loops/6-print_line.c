#include "main.h"

/**
 * print_line - function prints a straight line
 * @n: parameter
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
}
