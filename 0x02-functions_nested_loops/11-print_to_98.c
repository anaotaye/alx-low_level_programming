#include "main.h"

/**
 * print_to_98 - function to print natural numbers from n to 98
 *
 * @n: integer to print from
 *
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
