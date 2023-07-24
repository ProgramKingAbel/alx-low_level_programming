#include "main.h"

/**
 * _strcpy - cop string to buffer
 * @dest: to be copied to
 * @src: value to be copied
 * Return: pointer char
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x++] = '\0';
	return (dest);
}
