#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: char to be set
 *
 * Return: nothing to return
 */

void set_string(char **s, char *to)
{
	*s = to;
}
