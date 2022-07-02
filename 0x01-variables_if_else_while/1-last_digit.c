#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/*betty style doc for function main goes here*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	if (n > 0)
	{
		printf("Greater than 5");
	}
	if (n == 0)
	{
		printf("0");
	}
	if (n < 6 && n != 0)
	{
		printf("Less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
