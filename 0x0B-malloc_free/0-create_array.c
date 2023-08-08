#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point create arr of chars and init
 * with specifi char
 * @size: size of arr
 * @c: char to be initialized to
 * Return: null if size=0 else a pointer to the arr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
