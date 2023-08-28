#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural square root
 * of a number using recursion.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of the number,
 * or -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt(0, n));
}

/**
 * _sqrt - Helper function to calculate
 * the square root using binary search.
 * @n: The number for which to calculate the square root.
 * @p: The square root of the number.
 *
 * Return: The natural square root of the number.
 */

int _sqrt(int n, int p)
{
	if (n > p / 2)
	{
		return (-1);
	}
	else if (n * n == p)
	{
		return (n);
	}

	return (_sqrt(n + 1, p));
}
