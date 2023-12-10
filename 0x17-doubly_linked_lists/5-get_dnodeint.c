#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of the linked list
 *
 * @head: the head of the linked list
 * @index: the index of the wanted node
 *
 * Return: the address of the wanted node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	node = head;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
