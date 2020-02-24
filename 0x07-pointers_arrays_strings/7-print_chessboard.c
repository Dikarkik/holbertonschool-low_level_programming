#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 *@a: 2D array whit the chess.
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[y][x]);
		}
		_putchar('\n');
	}

}
