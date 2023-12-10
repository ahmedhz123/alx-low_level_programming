#include "lists.h"

/**
 * free_dlistint - frees the linked lists
 *
 * @head: the head of the linked list
 *
 * Return: Void
*/

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
