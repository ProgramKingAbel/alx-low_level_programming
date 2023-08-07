#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to brint arguments oassed in cmd
 * @argc: num of args passed
 * @argv: [] arr of elements passed in cmd
 * Return: Always 0 when successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
