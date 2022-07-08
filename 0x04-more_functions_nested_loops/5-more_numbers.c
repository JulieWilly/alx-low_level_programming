#include "main.h"

/**
 * more_numbers - function prints 0 through 14 10x
 */
void more_numbers(void)
{
	int m, n;

	for (m = 1; m < 10; m++)
	{
		for (n = 0; n < 15; n++)
		{
			if (m >= 10)
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
