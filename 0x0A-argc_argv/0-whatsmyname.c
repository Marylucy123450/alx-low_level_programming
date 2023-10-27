#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * __attribute__((unused)) - attribute is used to indicate to the
 * compiler that the argc parameter is intentionally unused.
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	/* Print the name of the program */
	/* first element of the argv array*/
	printf("%s\n", *argv);

	/* Return 0 to indicate successful execution */
	return (0);
}
