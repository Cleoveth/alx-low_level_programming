#include <stdio.h>

/**
 * main - Prints all multiples of 3 0r 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, a = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			a += n;
		}

		n++;
	}

	printf("%d\n", a);
	return (0);
}
