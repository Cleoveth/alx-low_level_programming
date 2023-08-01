#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array containing board elements
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int y, z;

	for (y = 0; a[y][7]; y++)
	{
		for (z = 0; z < 8; z++)
			_putchar(a[y][z]);
		_putchar('\n');
	}
}
