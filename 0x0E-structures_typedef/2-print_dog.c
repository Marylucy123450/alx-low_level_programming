#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: structure to print
 *
 * Description: This function prints the details of a struct dog.
 *              If any member of the struct is NULL, it prints "(nil)" instead.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL) /* Check if the struct pointer is NULL*/
		return;    /* If so, return nothing immediately*/

	if (d->name == NULL) /* Check if the name member is NULL */
		d->name = "(nil)"; /* If so, assign "(nil)" to name*/

	if (d->owner == NULL) /* Check if the owner member is NULL*/
		d->owner = "(nil)"; /* If so, assign "(nil)" to owner*/

	/* Print the struct dog details*/
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
