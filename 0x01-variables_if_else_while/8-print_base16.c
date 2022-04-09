#include <stdio.h>

/**
 * main - function to print hexadecimals
 * Return: 0 (success)
 */

int main(void)
{
	int num = '0';
	char alpha = 'a';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha < 'g'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
