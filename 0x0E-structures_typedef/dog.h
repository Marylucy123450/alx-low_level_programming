#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure that entails different attributes of a dog
 * @name: 1st member represents the name of the dog
 * @age: 2nd member represents age of the dog
 * @owner: 3rd member represents dog owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - an alias for the structure dog
 */
typedef struct dog dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */
