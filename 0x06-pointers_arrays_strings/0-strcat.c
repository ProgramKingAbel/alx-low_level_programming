#include "main.h"

/**
 * _strncat - Entry point for concatenation
 * @dest: initial string
 * @src: latter string to append
 * @n: no of bytes
 * Return: Pointer to final string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
