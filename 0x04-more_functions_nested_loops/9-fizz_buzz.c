#include "main.h"
#include <stdio.h>

/**
 * fizzBuzz - prints through 100
 */
void fizzBuzz(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x == 100)
			printf("Buzz");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", x);
	}
	printf("\n");
}
