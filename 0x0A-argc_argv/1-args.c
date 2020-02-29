#include <stdio.h>

/**
 * main - this program prints the number of arguments passed into it.
 *@argc: arg count.
 *@argv: arguments.
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
