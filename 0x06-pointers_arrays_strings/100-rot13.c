#include "main.h"

/**
 * rot13 - function to encode a string using rot13
 * @str: pointer to string to encode
 *
 * Return: pointer to encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
