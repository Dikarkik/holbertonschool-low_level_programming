#include <stdio.h>

/**
 * main - this program prints all arguments it receives.
 * @argc: arg count.
 * @argv: arguments.
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
