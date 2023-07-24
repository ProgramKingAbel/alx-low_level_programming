#include "main.h"

/**
 * puts_half - Entry point prints half a string
 * @str: string to be printed half of it
 * Return: empty
 */

void puts_half(char *str)
{
	int i = 0, int j;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
		j = 1 / 2;
	for (; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
