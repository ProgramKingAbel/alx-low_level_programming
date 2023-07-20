#include <stdio.h>
#include <math.h>

/**
 * main - entry point prints largest prime factor
 * Return: Always 0 (Success)
 */

int main(void)
{
	long x, max_prime;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			max_prime = num / x;
		}
	}
	printf("%ld\n", max_prime);
	return (0);
}
