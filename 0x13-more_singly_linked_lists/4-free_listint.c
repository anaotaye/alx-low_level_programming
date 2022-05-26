#include "lists.h"

/**
 * free_listint - function that frees the linked list
 * @head: Head of the list
 *
 * Return: nothing to return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
