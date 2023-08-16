#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - exec function given as parameter on each el of arr
 * @array: array of el
 * @size: arr length
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action == NULL || array == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
