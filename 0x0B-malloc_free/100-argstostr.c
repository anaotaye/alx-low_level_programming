#include <stdo.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: argument count
 * @av: pointer to address to array of size ac
 *
 * Return: pointer to new string
 */

char *argstostr(int ac, int **av)
{
	int i, n, k = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			length++;
	}
	length += ac;

	str = malloc(length + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i =  0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[k] = av[i][n];
			k++;
		}
		if (str[k] == '\0')
			str[k++] = '\n';
	}

	return (str);
}
