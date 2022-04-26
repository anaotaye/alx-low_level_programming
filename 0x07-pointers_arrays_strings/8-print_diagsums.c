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
	int sum1 = 0, sum2;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
