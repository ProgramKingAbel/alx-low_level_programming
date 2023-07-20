#include "main.h"

/**
 * print_most_numbers - Prints nums to stdout
 * Description: Print nums except 2 and 4
 * Return: nums 0 - 9
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
