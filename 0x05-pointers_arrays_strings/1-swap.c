#include "main.h"

/**
 * swap_int - swaps vals of two ints
 * @a: first value to be swapped
 * @b: second int to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int val = *a;
	*a = *b;
	*b = val;
}
