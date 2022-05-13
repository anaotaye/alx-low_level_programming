#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument counter
 * @argv: pointer to argument vector array
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operation = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operation  == '/' && b == 0) || (*operation == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operation)(a, b));
	return (0);
}
