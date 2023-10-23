#include "lists.h"

/**
 * free_listint - free the linked list
 *
 * @head: the head of the linked list
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr->next != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
	free(ptr);
}
