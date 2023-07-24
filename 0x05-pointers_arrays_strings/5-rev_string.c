#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char val;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		val = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = val;
	}
}
