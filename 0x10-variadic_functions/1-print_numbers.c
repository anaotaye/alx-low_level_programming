#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers, followed by a new line
 * @seperator: pointer to string seperator
 * @n: number of integers passed to the function
 *
 * Return: nothing to return
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(list);
}
