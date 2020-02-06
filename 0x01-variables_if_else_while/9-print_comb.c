#include <stdlib.h>
#include <stdio.h>

/**
 *main - main function
 *Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
