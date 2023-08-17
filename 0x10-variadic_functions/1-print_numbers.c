#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - entry point prints num followed by new line
 * @separator: str to print
 * @n: num of args
 * @...: other args
 * Return: separator ? char : NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int id;

	va_start(numbers, n);

	for (id = 0; id < n; id++)
	{
		printf("%d", va_arg(numbers, int));

		if (id != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
