#include "main.h"

/**
 * _puts - Entry point print a string with newline
 * @str: string to be printed
 * Return: empty
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
