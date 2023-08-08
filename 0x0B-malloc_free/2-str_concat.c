#include "main.h"

/**
 * str_concat - concats two strings
 * @s1: str one
 * @s2: str2
 * Return: *newly allocated space
 *
 */

char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	y = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	str = malloc(sizeof(char) * (x + y + 1));
	if (str == NULL)
		return (NULL);
	x = y = 0;

	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		str[x] = s2[y];
		x++, y++;
	}
	str[x] = '\0';
	return (str);
}
