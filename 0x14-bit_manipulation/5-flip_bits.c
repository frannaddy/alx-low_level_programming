#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int cat;
	unsigned long int exe = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		cat = exe >> a;
		if (cat & 1)
			count++;
	}

	return (count);
}
