#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: number of elements
 * return 0 success
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
		if (b != n - 1)
		printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
printf("\n");
}
