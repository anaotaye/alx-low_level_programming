#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to change for amount of money
 * @argc: length of argv array
 * @argv: pointer to array containing command line arguments
 *
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int amount, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	while (amount > 0)
	{
		if (amount >= 25)
			amount -= 25;
		else if (amount >= 10)
			amount -= 10;
		else if (amount >= 5)
			amount -= 5;
		else if (amount >= 2)
			amount -= 2;
		else if (amount >= 1)
			amount -= 1;

		cents += 1;
	}
	printf("%d\n", cents);
	return (0);
}
