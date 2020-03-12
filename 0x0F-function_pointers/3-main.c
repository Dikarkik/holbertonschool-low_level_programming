#include "3-calc.h"

/**
 * main - this program performs simple operations and print the result.
 * usage is calc num1 operator num2.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 on success. 98, 100 on error.
 */
int main(int argc, char *argv[])
{
	int (*fun_ptr)(int, int);
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fun_ptr = get_op_func(argv[3]);

	if (fun_ptr == NULL)
		exit(99);

	num1 = atoi(argv[2]);
	num2 = atoi(argv[4]);
	result = fun_ptr(num1, num2);
	printf("%d", result);

	return (0);
}
