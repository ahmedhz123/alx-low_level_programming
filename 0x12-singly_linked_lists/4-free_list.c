#include "lists.h"

/**
 * free_list - free the linked list
 *
 * @head: the head of the linked list
 *
 * Return: void
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
