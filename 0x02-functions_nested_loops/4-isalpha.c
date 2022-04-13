#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if c is a letter
 *
 * @c: character to be checked
 *
 * Return: returns 1 if the character is true and 0 if not
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
