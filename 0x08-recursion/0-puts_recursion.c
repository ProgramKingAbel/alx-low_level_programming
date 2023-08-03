#include "main.h"

/**
 * _puts_recursion - Entry point prints a string
 * @s: string to be printed
 * Return: empty
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
