#include "main.h"

/**
 * print_last_digit - Entry point prints last digit of num
 * @x: value to be evaluated
 * Return: value of last digit
 */

int print_last_digit(int x)
{
	x %= 10;
	if (x < 0)
	{
		x *= -1;
	}
	_putchar(x + '0');
	return (x);
}
