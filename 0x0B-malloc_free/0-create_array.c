#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function to create an array of chars using malloc
 * @size: size of array
 * @c: char to initialize with
 *
 * Return: NULL if size is 0 and a pointer if NULL fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (0);

	ptr = malloc((size) * sizeof(char));

	if (!p)
		return (0);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
