#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The pointer to the square matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	/* Calculate the sum of the main diagonal */
	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	/* Calculate the sum of the secondary diagonal */
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	/* Print the sums of the diagonals */
	printf("%d, %d\n", sum1, sum2);
}
