#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of linked list
 * @head: head of list
 * @index: position of node
 *
 * Return: nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
