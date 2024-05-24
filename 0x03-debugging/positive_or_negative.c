#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - generate a random number, prints whether
 * positive, negative, or zero.
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	printf("%d ", i);

	if (i > 0)
	{
		printf("is positive\n");
	}
	else if (i == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
}
