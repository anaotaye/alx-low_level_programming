#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: integer number
 *
 * Return: returns the factorial number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n));
}
