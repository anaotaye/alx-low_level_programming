#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenate two strings
 * @dest: string to append to
 * @src: string being appended
 *
 * Return: return the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; dest[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}

	dest[i] = '\0';
	return (dest);
}
