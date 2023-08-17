#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: target array.
 * @size: size of array.
 * @action: pointer to the function to be executed.
 * Return: Always 0 on success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int p;

	if (array && action)
		for (p = 0; p < size; p++)
			action(array[p]);
}
