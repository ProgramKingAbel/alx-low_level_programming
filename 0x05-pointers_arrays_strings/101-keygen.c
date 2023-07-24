#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password geneerator
 * Return: Always 0 (Success)
 */

int main(void)
{
	char password[84];
	int i = 0, sum = 0, h1, h2;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}
	password[i] = '\0';

	if (sum != 2772)
	{
		h1 = (sum - 2772) / 2;
		h2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			h1++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + h1))
			{
				password[i] -= h1;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + h2))
			{
				password[i] -= h2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
