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

	while (*(str + i))
	{
		if ((*(str + i)) != '\0')
		{
			_putchar(*(str + i));
			i = i + 2;
		}
	}
	_putchar('\n');
}
