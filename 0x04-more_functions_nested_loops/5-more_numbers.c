#include "main.h"

/**
 * more_numbers - Entry point prints 10 times a set of nums
 * Description: print 10 times a group of nums
 * Return: set of nums
 */

void more_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		int c;

		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				int x;

				x = c;
				while (x != 0)
				{
					int num;

					num = x % 10;
					_putchar(x + '0');
					x /= 10;
				}
			}
			else
			{
				_putchar(c + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}
