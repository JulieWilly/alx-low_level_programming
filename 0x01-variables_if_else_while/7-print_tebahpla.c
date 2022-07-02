#include <stdio.h>

int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
	{
		putchar(d);
	}
	putchar(10);
	return (0);
}

