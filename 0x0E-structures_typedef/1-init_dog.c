#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: ointer to dog owner parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
