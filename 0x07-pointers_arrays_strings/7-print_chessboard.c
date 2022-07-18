#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard.
 * @a: char type
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int row = 0, col;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			printf("%c", a[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
}
