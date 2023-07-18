#include "main.h"

/**
 * _abs - Entry file for absolute val of num
 * @x: integer to be evaluated
 * Return: abs of num
 */

int _abs(int x)
{
	if (x < 0)
	{
		x *= -1;
		return (x);
	}
	return (x);
}
