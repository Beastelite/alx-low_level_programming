#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function definition of init_dog
 * @d: pointer to struct dog to initialize
 * @name: name variable
 * @age: age varaible
 * @owner: owner variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

