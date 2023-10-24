#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes nodes
 *
 * @head: the head of the linked list
 * @index: the index of the deleted node
 *
 * Return: 0 Always (success)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *ptr;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			ptr->next = node->next;
			free(node);
			return (1);
		}
		ptr = node;
		node = node->next;
		i++;
	}
	return (-1);
}
