#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Entry point, prints anything and everything
 *
 * @format: arg types
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;

	va_start(list, format);

	for (int i = 0; format[i]; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				const char *str = va_arg(list, const char *);

				printf("%s", (str ? str : "(nil)"));
				break;
			default:
				continue;
		}
		if (format[i + 1])
			printf(", ");
	}

	printf("\n");
	va_end(list);
}
