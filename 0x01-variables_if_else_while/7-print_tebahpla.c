#include <stdlib.h>
#include <stdio.h>

/**
 *main - main function
 *Return: always 0
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
