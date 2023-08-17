#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Entry point, prints anything and everything
 *
 * @format: arg types
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *string, *separator = "";

	va_list items;

	va_start(items, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separator, va_arg(items, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(items, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(items, double));
					break;
				case 's':
					string = va_arg(items, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					a++;
					continue;
			}
			separator = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(items);
}
