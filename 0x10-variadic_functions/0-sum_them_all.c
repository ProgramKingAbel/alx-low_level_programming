#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry point sums args
 * @...: other args
 * @n: num or args
 * Return: n = 0 ? 0 : sum
 */

int sum_them_all(const unsigned int n, ...)
{
	{
	va_list args;
	unsigned int a, sum = 0;

	va_start(args, n);

	for (a = 0; a < n; a++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
