#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: NULL if string is empty,
 * pointer to duplicated memory.
 */

char *_strdup(char *str)
{
	char *cpy;
	unsigned int i;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	cpy = malloc(sizeof(char) * count + 1);

	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];

	return (cpy);
}
