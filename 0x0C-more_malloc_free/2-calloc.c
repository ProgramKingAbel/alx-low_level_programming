#include "main.h"
#include <stdlib.h>

/**
 * _filler - sets memory with default byte values
 * @s: memory to fill
 * @a: char to be copied
 * @n: time to copy a
 * Return: pointer to s
 */

char *_filler(char *s, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = a;
	}

	return (s);
}

/**
 * _calloc - Entry point allocates mem for an array
 * @nmemb: no of arr elements
 * @size: byte size of each arr element
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_filler(p, 0, nmemb * size);

	return (p);
}
