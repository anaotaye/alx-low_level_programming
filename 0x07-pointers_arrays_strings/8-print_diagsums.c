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
	int i;
	int sum1 = 0, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	_putchar(sum1);
	_putchar(sum2);
}
