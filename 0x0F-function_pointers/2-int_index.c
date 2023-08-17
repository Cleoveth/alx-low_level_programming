#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integer.
 * @size: size of array.
 * @cmp: a pointer to the function to be used to compare values.
 * Return: index of the first element,
 * -1 if no element matches,
 * also if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (; p < size; p++)
			if (cmp(array[p]))
				return (p);
	}
	return (-1);
}

