#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - function to capitalize all words of a string
 * @str: string to work on
 *
 * Return: returns pointer to string
 */

char *cap_string(char *str)
{
	int i, length;
	int symbols[] =  {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (i == 0 || str[i - 1] == symbols[i])
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i + 1] == symbols[i] || str[i + 1] == '\0')
			str[i] = toupper(str[i]);
	}

	return (str);
}
