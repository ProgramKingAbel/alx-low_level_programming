#include "main.h"

/**
 * print_square - Entry point
 * Description: prints a square
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
