#include "function_pointers.h"

/**
 * array_iterator - takes array and function and should use function on all elements
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
