#include "main.h"

/**
 * print_alphabet -  Print  alphabets in lower case
 * Return: always 0
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar("\n");
}
