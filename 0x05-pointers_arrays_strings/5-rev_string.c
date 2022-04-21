#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: pointer to the string value to be reserved
 *
 * Return: nothing to return
 */

void rev_string(char *s)
{
	int i;

	for (i = s[i]; i >= s[0]; i--)
	{
		_putchar(s[i]);
	}
}
