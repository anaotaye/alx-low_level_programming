#include "main.h"
#include <stddef.h>

/**
 * puts2 - prints every other characters, starting with the first
 * @str: pointer to string to be printed from
 *
 * Return: nothing to return
 */

void puts2(char *str)
{
	char *string;

	for (string = str; string != NULL; string += 2)
		_putchar(*string);

	_putchar('\n');
}
