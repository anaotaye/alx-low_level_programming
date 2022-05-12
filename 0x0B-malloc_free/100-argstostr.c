#include <stdio.h>
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
	int i, j, n, k = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		n = 0;
		while (av[i][n])
			n++;
		length += n + 1;
	}

	str = malloc(length + 1 * sizeof(char));
	if (str == 0)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		n = 0;
		while (av[j][n])
		{
			*(str + k) = av[j][n];
			k++;
			n++;
		}
		*(str + k) = '\n';
		k++;
	}
	*(str + k) = '\0';
	return (str);
}
