#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head of list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
