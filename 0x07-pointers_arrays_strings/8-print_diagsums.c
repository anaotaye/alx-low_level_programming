#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrices
 * @a: array
 * @size: size of array
 *
 * Return: nothing to return
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);
	}

	printf("%i, %i\n", sum1, sum2);
}
