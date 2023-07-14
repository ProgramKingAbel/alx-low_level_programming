#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	char x;

	i = 'A';
	x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
