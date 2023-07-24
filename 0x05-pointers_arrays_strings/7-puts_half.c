#include "main.h"

/**
 * puts_half - Entry point prints half a string
 * @str: string to be printed half of it
 * Return: empty
 */

void puts_half(char *str)
{
	int i = 0;
	int j;
	int h;

	while (str[i] != '\0')
		i++;
	h = (i - 1) / 2;

	for (j = (h + 1); j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
