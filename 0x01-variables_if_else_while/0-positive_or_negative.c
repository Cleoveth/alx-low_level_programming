#include <stdlib.h>
#include <time.h>

/**
 * main - a program that determines if a number is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf{"%d is %s\n", n, "zero");
	}
	return (0);
}
