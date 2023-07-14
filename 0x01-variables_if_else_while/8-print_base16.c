#include <stdio.h>


/**
 * main - Entry point
 * Description: 'print all the numbers of base 16 in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int o;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (o = 97; o <= 102; o++)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}
