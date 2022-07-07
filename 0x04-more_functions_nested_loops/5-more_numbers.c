#include "main.h"

/**
 * more_numbers - function prints 0 through 14 10x
 */
void more_numbers(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
