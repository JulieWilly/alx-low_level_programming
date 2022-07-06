#include "main.h"

/**
 * times_table - function prints the 9 time table
 * @m, @n,@o parameters passed
 */
void times_table(void)
{
	int m, n, z;

	for (m = 0; m < 10 ; m++)
	{
		for (n = 0; n < 10; n++)
		{
			z = m * n;
			if (z == 0)
				_putchar(z + '0');
			if (n != 0 && z < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
