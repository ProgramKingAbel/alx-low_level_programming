#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x;

	x = 10;
	while (x < 10)
	{
		char y;
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		x++;
	}
	_putchar('\n');
}
