#include "main.h"

/**
 * _strlen - a  function that returns the length of a string
 * @s: string to be counted
 * Return: length of string
 */

int _strlen(char *s)
{
	int z;
	int count = 0;

	for (z = 0 ; s[z] != '\0' ; z++)
		count++;

	return (count);
}
