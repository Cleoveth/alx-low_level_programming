#include "main.h"

/**
 * is_prime_number - checks if a number is prime.
 * @n: the number to check.
 *
 * Return: 1 if n is prime, 0 if otherwise.
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if n is prime.
 * @n: number to check.
 * @num: number to check from.
 *
 * Return: 1 if n is prime, 0 if otherwise.
 */

int is_prime(int n, int num)
{
	if (num <= 1)
	{
		return (1);
	}
	else if (n % num == 0)
	{
		return (0);
	}

	return (is_prime(n, num - 1));
}
