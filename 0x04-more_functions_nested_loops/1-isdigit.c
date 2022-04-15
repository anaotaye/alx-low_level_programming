#include <ctype.h>
#include "main.h"

/**
 * _isdigit - function to check if a variable is a digit
 * @c: variable to be checked
 *
 * Return: 0(success)
 */

int _isdigit(int c)

{
	for (c = 0; c <= 9; c++)
	{
		if (isdigit(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
