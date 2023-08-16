#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an int
 * @array: arr to search
 * @size: arr size
 * @cmp: pointer to func
 * Return: always (0) Success else (-1) Failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
