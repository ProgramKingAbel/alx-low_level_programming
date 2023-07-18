#include "main.h"

/**
 * _islower - Entry point checks for lowercase alphabet
 * @c: character to be checked
 * Return: 1 if lowercase letter or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
