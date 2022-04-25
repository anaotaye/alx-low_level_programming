#include "main.h"

/**
 * leet - function to encode a string into 1337(a form of spelling)
 * @str: pointer to string to be encoded
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = nums[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
