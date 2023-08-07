#include "main.h"
#include <stdio.h>

/**
 * main - App entry point prints sum of argsv
 * @argc: num of args passed in cmd
 * @argv: array of args passed in cmd
 * Return: Always (0) when success
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc > 3 || argc < 3)
		printf("Error");
		return (1);
	sum = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
