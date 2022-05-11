#include <stdlib.h>

/**
 * _strdup - Function to return a pointer to a space in memory
 * @str: ponter to copy of string in allocated memory
 *
 * Return: NULL if string is NULL or returns pointer to new string
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, j;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;

	s = malloc(sizeof(char) * i);

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);
}
