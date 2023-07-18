#include "main.c"
 /**
  * _islower - checks for lowercase
  * Return: 1 if c is lowecase 0 if uppercase
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
