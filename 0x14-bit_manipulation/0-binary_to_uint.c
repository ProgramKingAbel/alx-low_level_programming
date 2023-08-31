#include "main.h"

/**
 * binary_to_uint - conv bin to unsigned int
 * @b: string of 0s and 1s
 * Return: b!= '0' || '1' or Null ?? 0 : unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int a;

	unsigned int val = 0;

	if (!b)
		return (0);

	for (a = 0; b[0]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		val = 2 * val + (b[a] - '0');
	}
	return (val);
}
