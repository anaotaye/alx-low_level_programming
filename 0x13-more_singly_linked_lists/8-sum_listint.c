#include "lists.h"

/**
 * sum_listint - function that returns sum of all data in a linked list
 * @head: head of list
 *
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
