#include "main.h"
#include <stdio.h>

/**
 * main - App entry point
 * @argc: num of ars passed
 * @argv: array of actual args passed
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
