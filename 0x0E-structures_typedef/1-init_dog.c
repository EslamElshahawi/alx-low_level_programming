#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: passing a pointer to struct from main
 * @name: string for the dog name
 * @age: float for the dog age
 * @owner: store a string for the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
