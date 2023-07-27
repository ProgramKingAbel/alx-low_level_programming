#include "main.h"

/**
 * _strncat - Copies input
 * @dest: buffer storage for string copy
 * @src: The source string
 * @n: max no of bytes
 * Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

