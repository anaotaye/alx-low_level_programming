#include <stdio.h>

/**
 * main - function to print alphabets in lowercase and uppercase
 * Return: 0 (success)
 */

int main(void)

{
	char low_case = 'a';
	char upper_case = 'A';

	while (low_case <= 'z')
	{
		putchar(low_case);
		low_case++;
	}
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');

	return (0);

}
