#include "main.h"

/**
 * _isdigit - Entry point check for digit
 * @c: value to be checked
 * Return: 1 if truthy 0 if falsy
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
