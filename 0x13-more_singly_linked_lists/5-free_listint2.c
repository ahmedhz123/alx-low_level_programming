#include "lists.h"

/**
 * free_listint2 - frees the linked list
 *
 * @head: the head of the linked list
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr, *node;

	if (!head)
		return;

	ptr = *head;
	while (ptr)
	{
		node = ptr;
		ptr = ptr->next;
		free(node);
	}
	*head = NULL;
}
