#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
	char *data = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, data, 59);

	return (1);
}
