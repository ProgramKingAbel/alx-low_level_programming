#include "main.h"

/**
 * string_nconcat - Entry point concats 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes
 * Return: pointer to new address
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, size_1 = 0, size_2 = 0;

	while (s1 && s1[size_1])
		size_1++;

	while (s2 && s2[size_2])
		size_2++;

	if (n < size_2)
		s = malloc(sizeof(char) * (size_1 + n + 1));
	else
		s = malloc(sizeof(char) * (size_1 + size_2 + 1));

	if (!s)
		return (NULL);

	while (a < size_1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < size_2 && a < (size_1 + n))
		s[a++] = s2[b++];

	while (n >= size_2 && a < (size_1 + size_2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
