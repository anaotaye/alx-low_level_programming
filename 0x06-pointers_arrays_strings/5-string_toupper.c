#include "main.h"

/**
 * string_toupper - function to change lowercase letters to uppercase
 * @str: string to operate on
 *
 * Return: changed string
 */

char *string_toupper(char *str)
{
	int i;

	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
