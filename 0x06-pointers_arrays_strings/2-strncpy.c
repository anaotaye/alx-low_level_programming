#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: pointer to value to be copied into
 * @src: pointer to value to be copied
 * @n: number of chracters to be copied
 *
 * Return: return the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
