#include "main.h"

/**
 * _sqrt: helper function to _sqrt_recursion
 * @i: counter
 * @n: number
 *
 * Return: returns the result
 */

int _sqrt(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - calls _sqrt and returns result
 * @n: number to be calculated
 *
 * Return: return result
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
