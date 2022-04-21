#include "main.h"

/**
 * puts2 - prints every other characters, starting with the first
 * @str: pointer to string to be printed from
 *
 * Return: nothing to return
 */

void puts2(char *str)
{
	int i = 0;
	char string[] = *str;

	for (i = 0; string[i] != '\0'; i++)
	{
	       _putchar(string[i]);
	}
	_putchar('\n');
}
