#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - creates var of type struct dog
 * @d: pointer to init_dog
 * @name: name of instance
 * @age: age of instance
 * @owner: owner of instance
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = MALLOC(SIZEOF(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
