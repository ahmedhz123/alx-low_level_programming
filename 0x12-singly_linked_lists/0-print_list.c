#include "lists.h"

/**
 * print_list - a function that prints all element in list_t list
 *
 * @h: the singly linked list
 *
 * Return: the size of the linked lists
 *
*/

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
