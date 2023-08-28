#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees/deallocates memory for struct dog
 * @d: struct dog to free
 * Return: void(nothing)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
