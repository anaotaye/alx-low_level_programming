#include <ctype.h>
#include "main.h"

/**
 * _isdigit - function to check if a variable is a digit
 * @c: variable to be checked
 *
 * Return: return 1 if it's a digit and 0 if not
 */

int _isdigit(int c)

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
