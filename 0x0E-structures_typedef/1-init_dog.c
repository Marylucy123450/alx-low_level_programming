#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function initializes a struct dog with the given values.
 *              If struct pointer is NULL, it allocates memory for the struct.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /*Check if the struct pointer is NULL*/
	{
		/* If so, allocate memory for the struct*/
		d = malloc(sizeof(struct dog));
	}

	d->name = name; /* Assign the name to the struct's name member*/
	d->age = age;   /* Assign the age to the struct's age member*/
	d->owner = owner; /* Assign the owner to the struct's owner member*/
}
