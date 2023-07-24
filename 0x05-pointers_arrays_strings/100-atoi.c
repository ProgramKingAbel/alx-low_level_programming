#include "main.h"

/**
 * _atoi - Convert string to number
 * @s: string to be converted
 * Return: int
 */

int _atoi(char *s)
{
	int x = 0;
	unsigned int ui = 0;
	int min = 1;
	int si = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			min *= -1;
		}
		while (s[x] >= 48 && s[x] <= 57)
		{
			si = 1;
			ui = (ui * 10) + (s[x] - '0');
			x++;
		}
		if (si == 1)
			break;
		x++;
	}
		ui *= min;
		return (ui);
}
