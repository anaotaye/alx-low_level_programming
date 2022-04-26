#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte
 * @n: number of bytes of memory to be filled
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
