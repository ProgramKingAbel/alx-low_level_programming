#include "main.h"

/**
 * get_endianness - Does just that
 * Return: int
 */

int get_endianness(void)
{
	unsigned int c = 1;
	char *a = (char *) &c;

	return (*a);
}
