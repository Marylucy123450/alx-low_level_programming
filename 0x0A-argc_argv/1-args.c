#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	/* Print the number of arguments (excluding the program name) */
	printf("%d\n", argc - 1);

	/* Return 0 to indicate successful execution */
	return (0);
}
