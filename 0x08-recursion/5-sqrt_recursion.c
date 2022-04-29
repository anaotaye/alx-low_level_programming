#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _sqrt: helper function
 * _sqrt_recursion: calculate square root
 * @i: counter
 * @n: number to be used
 *
 * Return: returns the result
 */

int _sqrt(int i, int n)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
