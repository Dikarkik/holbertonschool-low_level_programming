#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int check_isdigit(int argc, char *argv[]);
int add_args(int argc, char *argv[]);

/**
 * main - adds positive numbers, and print the result.
 * @argc: arg count.
 * @argv: arguments.
 * Return: 0 on success. 1 when arguments have no digits.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	if (argc == 1)
		printf("0\n");

	else if (check_isdigit(argc, argv) == 1)
		return (1);

	else
		printf("%d\n", add_args(argc, argv));

	return (0);
}

/**
 * check_isdigit - search for no digits of main arguments.
 * @argc: arg count.
 * @argv: arguments.
 * Return: 0 on success, 1 when find some no digit.
 */
int check_isdigit(int argc, char *argv[])
{
	int count_arg;
	int count_char;

	for (count_arg = 1; count_arg < argc; count_arg++)
	{
		count_char = 0;

		while (argv[count_arg][count_char])
		{
			if (!isdigit(argv[count_arg][count_char]))
			{
				printf("Error");
				return (1);
			}
			count_char++;
		}
	}

	return (0);
}

/**
 * add_args - adds the numbers.
 * @argc: arg count.
 * @argv: arguments.
 * Return: the result of the sum.
 */
int add_args(int argc, char *argv[])
{
	int count;
	int result = 0;

	for (count = 1; count < argc; count++)
	{
		result += atoi(argv[count]);
	}

	return (result);
}
