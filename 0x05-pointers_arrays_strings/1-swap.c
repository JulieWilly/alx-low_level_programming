#include "main.h"

/**
 * swap_int - swaps the values the ints are holding
 * @a: param1
 * @b: param2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


