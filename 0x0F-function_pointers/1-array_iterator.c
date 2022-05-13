#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of n array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to the function to be used
 *
 * Return: nothing to return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
