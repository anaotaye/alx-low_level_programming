#include "main.h"

/**
 * is_prime_number - function to check if integer is a prime number
 * @n: integer to be checked
 *
 * Return: returns 1 if a prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	else if (n % 1 == 0 && n % n == 0)
		return (1);
	else
		return (0);
}
