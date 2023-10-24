#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in certain position
 *
 * @head: the head of the linked list
 * @idx: the position of the inserted node
 * @n: the data
 *
 * Return: the inserted node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *newnode = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	ptr = *head;
	while (ptr)
	{
		if (i == idx - 1)
		{
			newnode->next = ptr->next;
			ptr->next = newnode;
			return (newnode);
		}
		i++;
		ptr = ptr->next;
	}
	free(newnode);
	return (NULL);
}
