#include "function_pointers.h"

/**
 * int_index - fuction that searches for an integer
 * @array: pointer to array
 * @size: number of elements in the array
 * @cmp: pointer to function to be used
 *
 * Return: index of the first element for which the cmp funtion
 * does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
