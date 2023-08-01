#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: target string
 * @accept: reference bytes container
 * Return: number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int y, z;

	for (y = 0 ; s[y] != '\0' ; y++)
	{
		for (z = 0 ; s[y] != accept[z] ; z++)
		{
			if (accept[z] == '\0')
				return (y);
		}
	}
	return (*s);
}
