#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - function to determine the case of a letter
 * @c: the character to be checked
 *
 * Return: returns 1 if c is lowercase and 0 if not
 */

int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
