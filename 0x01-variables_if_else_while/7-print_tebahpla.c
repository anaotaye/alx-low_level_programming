#include <stdio.h>

/**
 * main - function to print lowercase alphabets in reverse
 * Return: 0 (success)
 */

int main(void)
{
	char alpha = 'z';

	for (alpha = 'z'; alpha < 'a'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
