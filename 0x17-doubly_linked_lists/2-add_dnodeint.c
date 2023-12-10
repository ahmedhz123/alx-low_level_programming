#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of the linked list
 *
 * @head: the head of the linked list
 * @n: the data of the node
 *
 * Return: Address of the new node || NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->prev = NULL;
	node->n = n;

	if (!*head)
	{
		(*head) = node;
		node->next = NULL;
	}
	else
	{
		(*head)->prev = node;
		node->next = (*head);
		(*head) = node;
	}

	return (node);
	free(node);
}
