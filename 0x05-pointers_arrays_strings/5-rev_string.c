#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: pointer to the string value to be reserved
 *
 * Return: nothing to return
 */

void rev_string(char *s)
{
	int i, length = 0;

	for (i = 0; i <= s[i]; i++)
		length++;

	for (i = 0; i <= s[length - 1]; i--)
		_putchar(s[i]);
}
