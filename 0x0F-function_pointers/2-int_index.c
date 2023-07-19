#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: An array to search in
 * @size: the size of the array
 * @cmp: Pointer to the comparing function
 * Return: Index of the first element for which
 * the cmp function does not return (0) or (-1) if no match found
 * or size is neg
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
