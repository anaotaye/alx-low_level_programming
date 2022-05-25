#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: linked list
 *
 * Return: number f elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
