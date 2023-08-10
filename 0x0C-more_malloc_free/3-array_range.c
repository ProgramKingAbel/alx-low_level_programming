#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point - creates array of integers
 * @min: start point
 * @max: end point
 * Return: pointer to newly created arr
 */

int *array_range(int min, int max)
{
	int *p;
	int a, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	p = malloc(sizeof(int) * len);

	if (p == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		p[a] = min++;

	return (p);
}
