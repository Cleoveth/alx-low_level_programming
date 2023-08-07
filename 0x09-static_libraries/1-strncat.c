#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int destlen = 0;

	while (dest[index++])
		destlen++;

	for (index = 0; src[index] && index < n; index++)
		dest[destlen++] = src[index];

	return (dest);
}
