#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * isdigit - check if it is a number
 * _atoi - converts a string to an integer
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	/* Check if no numbers are provided */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Perform the addition */
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		/* Check if the argument contains non-digit characters */
		for (num = 0; argv[i][num] != '\0'; num++)
		{
			if (!isdigit(argv[i][num]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Add the number to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", sum);

	return (0);
}
