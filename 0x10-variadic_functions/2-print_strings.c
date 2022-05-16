#include "variadic_functions.h"

/**
 * print_strings - function to print a string, followed by a new line
 * @seperator: string to be pinted between the strings
 * @n: number of srings passed to the function
 *
 * Return: nothing to return
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (seperator)
				printf("%s", seperator);
	}

	printf("\n");
	va_end(list);
}
