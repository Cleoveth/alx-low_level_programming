#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: the string to print
 * Return: nothing
 */

void print_rev(char *s)
{
int len = 0, index = 0;
len = s;

for (index = len - 1; index >= 0; index--)
_putchar(s[index]);

_putchar('\n');
}
