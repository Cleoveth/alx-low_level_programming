#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members in the array
 * @size: size of array
 * Return: pointer to allocated memory on success
 * on failure, return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
