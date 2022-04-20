#include "main.h"

/**
 * swap_int - Function to swap integers
 * @a: pointer to be swapped
 * @b: pointer to be swapped
 *
 * Return: nothing to return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
