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

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
