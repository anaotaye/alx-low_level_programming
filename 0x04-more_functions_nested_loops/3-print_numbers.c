#include"main.h"

/**
 * print_numbers - funtion to print numbers
 *
 * Return: 0 (success)
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
