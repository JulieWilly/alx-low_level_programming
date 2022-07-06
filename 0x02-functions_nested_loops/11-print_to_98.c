#include <stdio.h>

/**
 * print_to_98 - prints natural numbers upto 98
 * @n: the beggining of the numbers
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				prinf("%d, ", n);
			n = n + 1;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
				n = n - 1;
			}
		}
}
