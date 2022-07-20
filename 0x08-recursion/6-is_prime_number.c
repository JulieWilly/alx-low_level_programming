#include "main.h"

int findPrime(int, int);
/**
 * is_prime_number - function that checks for a prime number
 * @n: param
 * Return: an integer
 */

int is_prime_number(int n)
{
	return (findPrime(n, 1));
}

/**
 * findPrime - find the prime number
 * @n: number
 * @i: iterator
 * Return: a 1 or 0
 */
int findPrime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (findPrime(n, i + 1));
}
