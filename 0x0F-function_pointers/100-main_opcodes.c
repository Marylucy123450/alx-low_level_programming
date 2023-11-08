#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: The number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect,
 *         or 2 if the number of bytes is negative.
 */
int main(int argc, char **argv)
{
	int num_bytes;
	unsigned char *ptr;
	int i;

	/* Check if the number of arguments is incorrect */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the second argument to an integer */
	num_bytes = atoi(argv[1]);

	/* Check if the number of bytes is negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Create a pointer to the main function */
	ptr = (unsigned char *)main;

	/* Loop through each byte of the main function */
	for (i = 0; i < num_bytes; i++)
	{
		/* Print the opcode in hexadecimal format */
		printf("%02x", *(ptr + i));

		/* Add a space if it's not the last opcode */
		if (i < num_bytes - 1)
			printf(" ");
	}

	/* Print a newline character to end the listing */
	printf("\n");

	return (0);
}
