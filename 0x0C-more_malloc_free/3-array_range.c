#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to the newly created array.
 * if min > max, return NULL.
 * if malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
	int *result;
	int i, j = 0;

	if (min > max)
		return (NULL);
	result = malloc(sizeof(*result) * ((max - min) + 1));
	if (result != NULL)
	{
		for (i = min; i <= max; i++)
		{
			result[j] = i;
			j++;
		}
		return (result);
	}
	else
		return (NULL);
}
