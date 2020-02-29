#include <stdio.h>

/**
 * main - print the name of the function.
 *@argc: arg count.
 *@argv: arguments.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return(0);
}
