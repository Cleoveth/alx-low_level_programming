#include "main.h"

/**
 * factorial - Calculate the factorial of a number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the number, or -1 if n is negative.
 */

int factorial(int n)
{
	int p;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		p = n * factorial(n - 1);
	}
	return (p);
}
