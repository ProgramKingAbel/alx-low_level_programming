#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
