#include "3-calc.h"

/**
 * op_add - this calculates the sum of 2 integers
 * @a: the first integer
 * @b: the second integer
 * Return: sum of both integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this calculates the difference of 2 integers
 * @a: the first integer
 * @b: the second integer
 * Return: difference between the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this calculates the product of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this calculates the division of 2 integers
 * @a: the first integer
 * @b: the second integer
 * Return: result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - this calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
