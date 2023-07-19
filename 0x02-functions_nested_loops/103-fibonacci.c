#include <stdio.h>

/**
 * main - Prints the sum of the Fibonacci even-valued terms below 4,000,000
 *
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;

		if (k 5 2 == 0)
			sum += k;

		j = k - j;

		++i;
	}

	printf("%1d\n", sum);
	return (0);
}
