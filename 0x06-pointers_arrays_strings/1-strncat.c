#include "main.h"

/**
 * _strncopy - Copies input
 * @dest: buffer storage for string copy
 * @src: The source string
 * @n: max no of bytes
 * Return: pointer to string
 */

char *_strncopy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n)
		dest[i] = src[i];
	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
