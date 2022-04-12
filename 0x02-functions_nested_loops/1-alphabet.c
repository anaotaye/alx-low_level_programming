#include <stdio.h>

/**
 * main - function that uses another function to print alphabets
 * print_alphabet - function to print alphabets
 *
 * Return: 0 (success)
 */

void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha)
	}
	putchar('\n');
	return (0);
}
