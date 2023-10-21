#include "lists.h"

/**
 * list_len - A function thar prints the number of list's elements
 *
 * @h: the singly linked lists
 *
 * Return: the length of the linked list
*/

size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);

}
