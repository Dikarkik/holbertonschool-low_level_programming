#include <stdlib.h>
#include <stdio.h>

/**
 *main - main function
 *Return: always 0
 */

int main(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
	{
		putchar(l);
		if (l != '9')
		{
			putchar(44);
		}
		putchar(32);
	}

	putchar('\n');

	return (0);
}
