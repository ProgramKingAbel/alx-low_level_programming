#include "main.h"
#include <stdio.h>

/**
 * main - Entry point that returns no of args in cmd
 * @argc: no of args passed in cmd
 * @argv: array of elements passed in cmd
 * Return: Always 0 when successful
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
