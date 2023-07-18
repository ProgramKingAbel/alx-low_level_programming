#include "main.h"

/**
 * print_sign - Entry point prints the sign of a number
 * @n: int to be checked
 * Returns: 1 and print + if n positive else -1 if negative and 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
