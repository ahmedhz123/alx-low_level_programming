#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of the linked list
 *
 * @head: the head of the linked list
 * @n: the data of the linked list
 *
 * Return: The address of the new element || NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *p;

	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->n = n;

	if (!*head)
	{
		(*head) = node;
		node->prev = NULL;
	}
	else
	{
		p = *head;
		while (p->next)
			p = p->next;
		p->next = node;
		node->prev = p;
	}

	return (node);
	free(node);
}
