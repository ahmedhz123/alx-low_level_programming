#include "lists.h"

/**
 * sum_dlistint - sums the data of the linked list
 *
 * @head: the head of the linked list
 *
 * Return: the the sum of the data in the linked list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
