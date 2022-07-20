#include "main.h"

/**
 * _sqrt_recursion - sqrt using a recursive function
 * @n: parameter for the sqrt
 * Return: squeareroot of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: the iterator
 * Return: a number
 */
int _sqrt(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (i);
	return (_sqrt(n, i + 1));
}

