#include "main.h"

/**
 * puts2 - prints every other characters, starting with the first
 * @str: pointer to string to be printed from
 *
 * Return: nothing to return
 */

void puts2(char *str)
{
	char *string;

	for (*string = str; *string != '\0'; *string += 2)
		_putchar(*string);

	_putchar('\n');
}
