#include "main.h"

/**
 * _isalpha - Entry point checks for alphabet
 * Return: 1 if letter or 0 otherwise
 * c - integer to be checked
 */


int _isalpha(int c)
{
	if (( >= 65 && <= 90)|| (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
