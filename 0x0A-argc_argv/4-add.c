#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * numCheck - check - string if digit exists
 * @str: array string
 *
 * Return: Always 0 (Success)
 */

int numCheck(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}


/**
 * main - App entry point summs args
 * @argc: no of args passed in execution
 * @argv: array of str of args passed in execution
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int a;
	int newInt;
	int sum;

	for (a = 1; a < argc; a++)
	{
		if (numCheck(argv[a]))
		{
			newInt = atoi(argv[a]);
			sum += newInt;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
