#include "main.h"

/**
 * print_rev - print a string in reverse followed ny a newline
 * @s: string to be reversed
 * Return: empty
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (x--; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
