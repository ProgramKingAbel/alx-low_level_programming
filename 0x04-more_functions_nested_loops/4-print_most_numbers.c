#include "main.h"

/**
 * print_most_number - Prints nums to stdout
 * Return: void
 */

void print_most_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
