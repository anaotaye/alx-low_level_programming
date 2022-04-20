#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function to copy string from one pointer to another
 * @dest: pointer to copy into
 * @src: pointer to copy from
 *
 * Return: return pointer that was copied into
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	while(*(src + i))
	{
		*(dest + i) = *(src +i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
