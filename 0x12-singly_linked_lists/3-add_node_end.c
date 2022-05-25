#include "lists.h"

/**
 * add_node_end - function that adds a new node to the end of the list
 * @head: pointer to pointer of head of list
 * @str: string to be added
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t _char;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (_char = 0; str[_char]; _char++)
		;

	new->len = _char;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
