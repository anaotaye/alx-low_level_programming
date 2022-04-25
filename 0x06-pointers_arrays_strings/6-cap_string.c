#include "main.h"

/**
 * cap_string - function to capitalize all words of a string
 * @str: string to work on
 *
 * Return: returns pointer to string
 */

char *cap_string(char *str)
{
	int i, j;
	char symbols[] = {" \t\n,;.!?\"(){}"};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == symbols[i])
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
	}

	return (str);
}
