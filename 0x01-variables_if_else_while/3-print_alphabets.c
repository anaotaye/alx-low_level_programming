#include <stdio.h>

/**
 * main - function to print alphabets in lowercase and uppercase
 * Return: 0 (success)
 */

int main(void)

{
	char low_alpha = 'a';
	char high_alpha = 'A';

	while (low_alpha <= 'z')
	{
		putchar(low_alpha);
		low_alpha++;
	}
	while (high_alpha <= 'Z')
	{
		putchar(high_alpha);
		high_alpha++;
	}
	putchar('\n');

	return (0);

}
