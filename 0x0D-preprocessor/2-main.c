#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 * prints filename it was compiled from
 * Return: (0) always Success
 */

int main(void)
{
	printf("%s\n" __FILE__);
	return (0);
}
