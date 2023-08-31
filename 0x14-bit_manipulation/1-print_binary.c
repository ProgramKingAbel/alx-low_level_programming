#include "main.h"

/**
 * print_binary - prints binary rep of num
 * @n: number to convert
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int a;
	unsigned long int current;

	int counter = 0;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
