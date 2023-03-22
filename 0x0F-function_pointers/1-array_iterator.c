#include "function_pointers.h"

/**
 * array_iterator - runs a given function on each element in a given array
 *
 * @array: pointer to the first element of an array of int
 * @size: the size of the array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
