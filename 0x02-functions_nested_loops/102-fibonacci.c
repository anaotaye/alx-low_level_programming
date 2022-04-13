#include <stdio.h>

/**
 * main - function to print the first fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	long sum = 0;

	for (i = 1; i <= 50; i++)
	{
		sum += i;
		printf("%lu, ");
	}
	printf("\n");
}
