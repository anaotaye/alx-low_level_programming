#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers from n to 98
 *
 * @n: integer to print from
 *
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}

	else if (n <= 97)
	{
		for (n = n; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n >= 97; n--)
		{
			printf("%d, ", n);
		}
	}
}
