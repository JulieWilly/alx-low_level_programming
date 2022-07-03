#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
/*betty description for the main function*/
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
