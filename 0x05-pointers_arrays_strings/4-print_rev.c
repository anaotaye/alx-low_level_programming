#include <string.h>
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

	for (i = (strlen(s) - 1); i >= 0; i--)
		_putchar (s[i]);

	_putchar ('\n');
}
