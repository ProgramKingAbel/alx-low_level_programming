#include "main.h"

/**
 * _isalpha - Entry point checks for alphabet
 * @c: character to be checked
 * Return: 1 if letter or 0 otherwise
 */


int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
