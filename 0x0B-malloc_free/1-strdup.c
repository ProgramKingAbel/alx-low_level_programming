#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: str whose memory is to be allocated
 * Return: str ? *duplicated_string : NULL
 */

char *_strdup(char *str)
{
	int a, b = 0;
	char *xxx;

	if (str == NULL)
		return (NULL);
	a = 0;

	while (str[a] != '\0')
		a++;

	xxx = malloc(sizeof(char) * (a + 1));

	if (xxx == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		xxx[b] = str[b];

	return (xxx);
}
