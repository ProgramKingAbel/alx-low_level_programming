#include <stdio.h>
#include <stdlib.h>

/**
 * main -  entry point
 * Return - Always 0 (Success)
 */

int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
