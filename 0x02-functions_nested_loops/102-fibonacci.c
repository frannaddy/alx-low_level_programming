#include <stdio.h>

/**
 * a program that prints the first 50 Fibonacci numbers
 * staring 1 and 2
 * The numbers must be separated by comma, followed by a space
 * Reurn 0 (success)
 */

int main(void)
{
	int count;
	unsigned long nac1 = 0, nac2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = nac1 + nac2;
		printf("%lu", sum);

		nac1 = nac2;
		nac2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
