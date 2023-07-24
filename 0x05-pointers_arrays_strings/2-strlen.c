#include "main.h"

/**
 * _strlen - Counts length of string
 * @s: string to be count
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
