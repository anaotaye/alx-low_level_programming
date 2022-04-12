#include "main.h"

/**
 * print_alphabet - function to print lowercase alphabets
 * main - check the code
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
