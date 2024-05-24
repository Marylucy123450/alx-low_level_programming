#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;       /* Variable to store the number*/
	long int max;     /*Variable to store the largest prime factor*/
	long int i;       /* Loop variable*/

	n = 612852475143;
	max = -1;         /* Initialize max to -1*/

	/* Divide n by 2 until it is no longer divisible by 2*/
	while (n % 2 == 0)
	{
		max = 2;       /* Update max to 2*/
		n /= 2;        /* Divide n by 2*/
	}

	 /* Check for prime factors starting from 3*/
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		/* Divide n by i until it is no longer divisible by i*/
		while (n % i == 0)
		{
			max = i;    /* Update max to i*/
			n = n / i;  /* Divide n by i*/
		}
	}

	if (n > 2)   /* If n is greater than 2, it is a prime factor itself*/
		max = n;  /* Update max to n*/

	printf("%ld\n", max);   /*/ Print the largest prime factor*/

	return (0);
}
