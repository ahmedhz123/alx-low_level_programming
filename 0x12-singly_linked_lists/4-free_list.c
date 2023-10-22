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
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
