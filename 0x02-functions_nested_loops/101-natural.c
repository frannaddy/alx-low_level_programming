#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * prints the sum of all the multiples of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, a = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			a += i;
	}

	printf("%d\n", a);

	return (0);
}
