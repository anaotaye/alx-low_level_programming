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
	int i = 0;
	int symbols[] =  {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		j = 0;

		while (symbols[j] != '/0')
		{
			if (symbols[j] == str[i] && (str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}
