#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer of string
 * @accept: pointer to bytes to get
 *
 * Return: returns length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
