#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid  passwords for
 * the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int pass[100];   /* Array to store the password digits */
	int i, sum, n;
	/* Variables for iteration, sum calculation, and additional digit */

	sum = 0;   /* Initialize the sum to 0 */
	/*Seed the random number generator with the current time */
	srand(time(NULL));
	/*Generate 100 random digits for the password */
	for (i = 0; i < 100; i++)
	{
		/* Generate a random number between 0 and 77 */
		pass[i] = rand() % 78;
		/* Add the digit to the sum by converting to its ASCII value */
		sum += (pass[i] + '0');
		/* Print digit by converting back to character representation */
		putchar(pass[i] + '0');
		/* Check if adding an additional digit is possible */
		if ((2772 - sum) - '0' < 78)
		{
			/* Calculate the required additional digit */
			n = 2772 - sum - '0';
			sum += n;   /* Update sum by adding additional digit */
			putchar(n + '0');   /* Print the additional digit */
			break; /* Exit loop since the password is complete */
		}
	}

	return (0);   /* Return 0 to indicate successful program execution */
}
