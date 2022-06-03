#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int length, b2;

	if (!b)
		return (0);

	ui = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, b2 = 1; length >= 0; length--, b2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		if (b[length] & 1)
			ui += b2;
	}

	return (ui);
}
