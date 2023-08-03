#include "main.h"

/**
 * clear_bit - This set the  a bit to 0 at a given index
 * @n: parameter
 * @index: index
 * Return: 1 if works, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
