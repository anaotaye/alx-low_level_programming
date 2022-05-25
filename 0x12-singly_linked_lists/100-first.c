#include <stdio.h>

/**
 * first - functin executed first before main
 *
 * Return: nothing to return
 */

void __attribute__ ((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
