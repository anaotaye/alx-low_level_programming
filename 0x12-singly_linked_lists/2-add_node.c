#include "lists.h"

/**
 * add_node - pointer to function that adds a node at the beginning of a list
 * @head: head of linked list
 * @str: string to store in new node
 *
 * Return: addres of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t _char;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (_char = 0; str[_char]; _char++)
		;

	new->len = _char;
	new->next = *head;
	*head = new;

	return (*head);
}
