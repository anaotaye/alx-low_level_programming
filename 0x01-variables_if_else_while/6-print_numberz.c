#include <stdio.h>

/**
 * main - function to print first 10 numbers
 * Return: 0 (success)
 */

int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
