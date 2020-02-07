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
	int j;

	for (i = 48; i <= 55; i++)
	{
		for (x = i + 1; x <= 56; x++)
		{
			for (j = x + 1; j <= 57; j++)
			{
				putchar(i);
				putchar(x);
				putchar(j);

				if (!(i == 55 && x == 56 && j == 57))
				{
					putchar(44);
					putchar(32);
				}
			}

		}
	}
	putchar('\n');

	return (0);
}
