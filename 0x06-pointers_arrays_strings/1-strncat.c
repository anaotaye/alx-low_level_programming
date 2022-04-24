#include "main.h"
#include <string.h>

/**
 * _strncat - Function to concatenate two strings but with n bytes from src
 * @dest: pointer to value to be appended to
 * @src: pointer to value being appended
 * @n: number of characters to be gotten from src pointer
 *
 * Return: return concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
