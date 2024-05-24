#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard array.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Iterate through each row of the chessboard */
	for (i = 0; i < 8; i++)
	{
		/* Iterate through each column of the chessboard */
		for (j = 0; j < 8; j++)
		{
			/* Print the current square of the chessboard */
			_putchar(a[i][j]);
		}

		/* Move to the next line after each row */
		_putchar('\n');
	}
}
