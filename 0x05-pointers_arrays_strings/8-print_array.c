#include <stdio.h>
#include "main.h"

/**
 * print_array - Function to print a number of elements of an array
 * @a: array pointer
 * @n: number of elements to print
 *
 * Return: nothing to return
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");

		i++;
	}
	printf("\n");
}
