#include "main.h"

/**
 * jack_bauer - function to print the minutes of the day
 *
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10));
			_putchar((hour % 10));
			_putchar(':');
			_putchar((min / 10));
			_putchar((min % 10));
			_putchar('\n');
		}
	}
}

