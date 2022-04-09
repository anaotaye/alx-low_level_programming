#include <stdio.h>

/**
 * main - function to print combination of two digits
 * Return: 0 (success)
 */

int main(void)
{
	int num1 = '0';
	int num2 = '1';

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '1'; num2 <= '9'; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != '8' || num2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
