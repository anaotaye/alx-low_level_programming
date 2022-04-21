#include "main.h"

/**
 * print_rev - Function to reverse a string
 * @s: pointer to value to be reversed
 *
 * Return: nothing to return
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
		_putchar (s[i]);

	_putchar ('\n');
}
