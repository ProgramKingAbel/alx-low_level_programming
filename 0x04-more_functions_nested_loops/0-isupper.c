#include "main.h"

/**
 * _isupper - Entry point checks code
 * @c: value to be checked
 * Return: 1 if truthy and 0 if falsy
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
