#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - checks whether a numbr is postive or negative
 * @i: integer parameter
 * Return: always 0 (Success)
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero", n);
	if (n < 0)
		printf("%d is negative", n);
	return (0);
}

/**
* main - debuggin test 1
* Return: 0
*/

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
