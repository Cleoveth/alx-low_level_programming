#include <stdio.h>
#include <stdlib.h>

/**
 * main -multiplies two numbers
 * @argc: number of command-line arguments
 * @argv: string of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int index1;
	int index2;
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	index1 = atoi(argv[1]);
	index2 = atoi(argv[2]);

	mul = index1 * index2;

	printf("%d\n", mul);

	return (0);
}
