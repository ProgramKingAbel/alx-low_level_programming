#include "main.h"

/**
 * jack_bauer - Entry point to print minutes of the day
 * Return: void
 */

void jack_bauer(void)
{
	int a, x, y, z;

	for (a = 0; a <= 2; a++)
	{
		for (x = 0; x <= 9; x++)
		{
			if ((a <= 1 && x <= 9) || (a <= 2 && x <= 3))
			{
				for (y = 0; y <= 5; y++)
				{
					for (z = 0; z <= 9; z++)
					{
						_putchar(a + '0');
						_putchar(x + '0');
						_putchar(58);
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
