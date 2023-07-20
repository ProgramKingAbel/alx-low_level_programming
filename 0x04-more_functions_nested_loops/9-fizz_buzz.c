#include <stdio.h>

/**
 * main - Entry point
 * Description: divisble by 3 fizz 5, buzz both Fizzbuzz
 * Return: Always 1 (Success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (1);
}
