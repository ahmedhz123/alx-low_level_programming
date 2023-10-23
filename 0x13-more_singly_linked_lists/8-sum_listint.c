#include "lists.h"

/**
 * sum_listint - finds the the sum of all data in linked list
 *
 * @head: the head of the linked list
 *
 * Return: the sum of all data in the linked list
*/

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	if (!head)
		return (0);

	while (ptr->next != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	sum += ptr->n;
	return (sum);
}
