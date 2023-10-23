#include "lists.h"

/**
 * pop_listint - deletes the first node or the head node
 *
 * @head: head of the pointer
 *
 * Return: the data of the head node
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (!head || !*head)
	{
		return (0);
	}
	ptr = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = ptr;
	return (n);
}
