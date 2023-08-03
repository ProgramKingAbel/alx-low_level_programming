#include "main.h"

/**
 * factorial - calculate factorial of a number
 * @n: int to get factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
