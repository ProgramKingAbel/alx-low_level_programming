#include "main.h"

/**
 * print_diagonal - Entry point prints xters diagonally
 * @n: num of / xters to be printed
 * Return: diagonal shape
 */

void print_diagonal(int n)
{
	for (; n > 0; n--)
	{
		_putchar(32);

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(92);
			_putchar('\n');
		}
	}
}
