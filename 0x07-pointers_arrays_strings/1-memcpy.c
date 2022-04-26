#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: pointer to memory area to be copied into
 * @src: pointer to memory area to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to dest memory area area
 */

char *_memcpy(char *dest, char* src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

