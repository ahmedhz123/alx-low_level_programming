#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at specific position
 *
 * @h: the head of the linked list
 * @idx: the index you want to add in
 * @n: the data of the linked list
 *
 * Return: The address of the inserted node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *p;
	unsigned int i = 0;

	if (node == NULL)
		return (NULL);

	node->n = n;

	p = (*h);
	while (p != NULL)
	{
		if (i == idx)
		{
			p->prev->next = node;
			node->prev = p->prev;
			node->next = p;
			p->prev = node;
			return (node);
		}
		p = p->next;
		i++;
	}
	return (NULL);
	free(node);
}
