#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates minimum number of coins for change
 * @argc: number of arguments
 * @argv: array of arguments
 * _atoi - converts a string to an integer
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)/* Check if the number of arguments is exactly 2 */
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);	/* Convert the argument to integer using atoi */
	if (cents < 0)/* Check if the cents value is negative */
	{
		printf("0\n");
		return (0);
	}
	/* Calculate the minimum number of coins */
	for (; cents > 0; coins++)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
	}
	printf("%d\n", coins);/* Print the result */
	return (0);
}
