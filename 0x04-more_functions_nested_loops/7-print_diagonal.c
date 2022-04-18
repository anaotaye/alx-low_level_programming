#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: number of times to print '\' in diagonal
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, j;
	char k, s;

	k = '\\';
	s = ' ';

	for (i = 0; i < n; i++)
	{
		if (n > 1)
		{
			for (j = 0; j < 1; j++)
			{
				_putchar(s);
			}
			_putchar(k);
			_putchar('\n');
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
