#include "main.h"

/**
 * print_alphabet_x10 - printing the  lower case alphabest 10 times
 */
void print_alphabet_x10(void)
{
	int c;
	char ch;

	for (c = 1; c <= 10; c++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
