#include <stdio.h>

/**
 * main - function to print numbers followed by a comma and space
 * Return: 0(success)
 */

int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
