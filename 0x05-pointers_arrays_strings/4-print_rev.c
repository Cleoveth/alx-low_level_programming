#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: the string to print
 * Return: nothing
 */

void print_rev(char *s)
{
	char x = s;

	while (s[x] != '\0')
	{
		x++;
	}

	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
