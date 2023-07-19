#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int x = 0, y = 1, z = 2;

	while (x < 50)
	{
		if (x == 0)
			printf("%1d", y);
		else if (x == 1)
			printf(", %1d", z);
		else
		{
			z += y;
			y = z - y;
			printf(", %1d", z);
		}

		++x;
	}

	printf("\n");
	return (0);
}
