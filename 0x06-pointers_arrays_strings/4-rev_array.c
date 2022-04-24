#include "main.h"

/**
 * reverse_array - function to reverse an array of integers
 * @a: pointer to array of integers
 * @n: number of elements of array
 *
 * Return: nothing to return
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;

	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
