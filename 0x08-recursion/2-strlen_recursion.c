#include "main.h"

/**
 * _strlen_recursion - count the length of a string
 * @s: Strings length to be counted
 * Return: int length of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
