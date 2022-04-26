#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of square matrices
 * @a: array
 * @size: size of array
 *
 * Return: nothing to return
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum += a[i][j];
			_putchar(sum);
			if (j == (size - 1))
				_putchar('\n');
		}
	}
}
