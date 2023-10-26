#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: input number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	/* Base cases Numbers less than or equal to 1 are not prime */
	if (n <= 1)
		return (0);

	/* Call helper function to check divisibility */
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function to check divisibility recursively
 * @n: input number
 * @divisor: current divisor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	/* Base case: divisor exceeds the square root of n */
	/* n is not divisible by any numbers, so it is prime */
	if (divisor * divisor > n)
		return (1);

	/* Check for divisibility */
	/* n is divisible by divisor, so it is not prime */
	if (n % divisor == 0)
		return (0);

	/* Recursively check with the next divisor */
	return (is_prime_helper(n, divisor + 1));
}
