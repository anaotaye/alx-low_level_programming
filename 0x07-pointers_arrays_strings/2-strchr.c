#include "main.h"
#include <string.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: pointer to string to be checked
 * @c: character to be checked
 *
 * Return: returns a pointer to the character or NULL if not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
