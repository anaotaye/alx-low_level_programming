#include <stdio.h>
#include "main.h"

/**
 * _puts - Function to print string to stdout
 * @str: string to print to stdout
 *
 * Return: nothing to return
 */

void _puts(char *str)
{
	gets(str);
	puts(str);
	_putchar('\n');
}
