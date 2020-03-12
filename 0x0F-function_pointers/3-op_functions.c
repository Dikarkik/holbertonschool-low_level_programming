#include "3-calc.h"

/**
 * op_add - add.
 * @a: int 1.
 * @b: int 2.
 * Return: result.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract.
 * @a: int 1.
 * @b: int 2.
 * Return: result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul.
 * @a: int 1.
 * @b: int 2.
 * Return: result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div.
 * @a: int 1.
 * @b: int 2.
 * Return: result.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - mod.
 * @a: int 1.
 * @b: int 2.
 * Return: result.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
