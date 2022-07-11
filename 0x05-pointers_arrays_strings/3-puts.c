#include "main.h"

/**
 * _puts - funtion that puts some data to the stdout
 * @str: pramaeter to the function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

