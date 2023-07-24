#include "main.h"

/**
 * puts2 - Entry point prints new char
 * @str: xters of a string to be output
 * Return: void
 */

void puts2(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
		j++;

	for (i = 0; i < j; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
