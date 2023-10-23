#include "lists.h"

/**
 * get_nodeint_at_index - founds the index of the node in the linked list
 *
 * @head: the head of the linked list
 * @index: the index of the node in the linked list
 *
 * Return: the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *node;
	unsigned int i = 0;

	ptr = head;
	if (!index)
	{
		return (NULL);
	}

	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	node = ptr;
	return (node);
}
