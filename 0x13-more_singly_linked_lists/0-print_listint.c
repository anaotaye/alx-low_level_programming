#include "lists.h"

/**
 * print_listint - functon that prints all elements of a list
 * @h: Head of list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t elem;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elem++;
	}
	return (elem);
}
