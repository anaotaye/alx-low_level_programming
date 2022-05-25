#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: pointer to head of the lined list
 *
 * Return: nothing to return
 */

void free_list(list_t *head)
{
	list_t *nodePtr;

	while ((nodePtr = head) != NULL)
	{
		head = head->next;
		free(nodePtr->str);
		free(nodePtr);
	}
}
