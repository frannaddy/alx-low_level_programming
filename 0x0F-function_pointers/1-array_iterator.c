#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a function given as a parameter
 * @array: An array to iterate over
 * @size: A size of the array
 * @action: A pointer to function use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
