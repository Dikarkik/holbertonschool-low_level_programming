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
	int u;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (j = i; j <= 9; j++)
			{
				for (u = x + 1; u <= 9; u++)
				{
					putchar(i + '0');
					putchar(x + '0');
					putchar(32);
					putchar(j + '0');
					putchar(u + '0');

					if (!(i == 9 && x == 8 && j == 9 && u == 9))
					{
						putchar(44);
						putchar(32);
					}
				}

			}

		}
	}
	putchar('\n');
	return (0);
}
