#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print str and \N eof
 * @separator: str to be pr btn str
 * @n: num of str btn doc
 * Return: separator ? separator : NULL
 * str ? str : nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all_str;
	char *str;
	unsigned int id;

	va_start(all_str, n);

	for (id = 0; id < n; id++)
	{
		str = va_arg(all_str, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (id != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(all_str);
}
