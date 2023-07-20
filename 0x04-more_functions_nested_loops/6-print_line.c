#include "main.h"

/**
 * print_line - Entry point
 * @n: number of times to print a line
 * Return: lines and if 0 return new line
 */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}

