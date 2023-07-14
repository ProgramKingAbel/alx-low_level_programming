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

	i = 'a';
	putchar(i);
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	return (0);
}
