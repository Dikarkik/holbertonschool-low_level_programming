#include <stdlib.h>
#include <stdio.h>

/**
 *main - main function
 *Return: always 0
 */

int main(void)
{
	int i;
	int x;

	for (i = 48; i <= 56; i++)
	{
		for (x = i + 1; x <= 57; x++)
		{
			putchar(i);
			putchar(x);

			if (!(i == 56 && x == 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
