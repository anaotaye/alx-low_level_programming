#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to check if a a character is uppercase
 * @c: character to be checked
 *
 * Return: return 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
