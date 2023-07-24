#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints array of integerss
 * @a: array with values
 * @n: numer of elements of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (i != (n - 1))
			printf(", ");
	}
	printf('\n');
}
