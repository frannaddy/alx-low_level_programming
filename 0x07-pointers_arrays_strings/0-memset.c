#include "main.h"

/**
 * _memset - fills the first byte of memory are  pointed
 * @s: pointer to the memory filled
 * @b: value to be filled up with memory
 * @n: number of bytes of memory area
 * Return: Pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
