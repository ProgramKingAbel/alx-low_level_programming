#include "main.h"

/**
 * malloc_checked - Entry point Asign Heap memory with malloc
 * @b: Int to be assigned memory
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
