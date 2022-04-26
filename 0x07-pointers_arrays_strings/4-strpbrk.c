#include "main.h"
#include <string.h>

/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: pointer string to search
 * @accept: pointer substring to search for
 *
 * Return: pointer to byte that matches search
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
