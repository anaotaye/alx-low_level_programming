#include <stdio.h>

/**
 * main - function to print lowercase alphabetsexcept q and e
 * Return: 0 (success)
 */

int main(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
