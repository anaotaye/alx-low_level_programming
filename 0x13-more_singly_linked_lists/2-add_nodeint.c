#include "lists.h"

/**
 * add_nodeint - function pointer that adds a node at the beginning of a list
 * @head: head of list
 * @n: new node to be added
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
