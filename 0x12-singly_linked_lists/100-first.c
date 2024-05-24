#include <stdio.h>

/* ensure that the function is called automatically during*/
/*program startup, before the main() function is executed*/
void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - Prints a message before the main function is executed
 */
void print_before_main(void)
{
	/* Print the desired message */
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
