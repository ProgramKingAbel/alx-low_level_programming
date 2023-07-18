#include "main.h"

/**
 * jack_bauer - Entry point to print minutes of the day
 * Return: void 
 */

void jack_bauer(void)
{
	int a;

	a = 0;

	while (a <= 2)
	{
		int x;

		x = 0;
		while (x <=9)
		{
			if((a <= 1 && x <=9) || (a <= 2 && x <= 3))
			{
				int y;

				y = 0;
				while (y <= 5)
				{
					int z;

					while (z <= 9)
					{
						_putchar(a + '0');
						_putchar(x + '0');
						_putchar(58);
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar('\n');
						z++;
					}
					y++;
				}
			}
			x++;
		}
		a++;
	}
}
