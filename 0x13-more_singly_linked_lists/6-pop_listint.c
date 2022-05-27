#include "lists.h"

/**
 * pop_listint - function that deletes the head node and return node's data
 * @head: pointer to pointer of head of list
 *
 * Return: head of node's data
 */

int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	first_node = current->n;
	h = current->next;
	free(current);

	*head = h;

	return (first_node);
}
