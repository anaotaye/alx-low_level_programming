#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i;
	char *l;

	i = 1;
	l = (char *) &i;

	return ((int)*l);
}
