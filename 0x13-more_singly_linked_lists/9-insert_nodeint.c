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
	unsigned int i = 0;
	listint_t *newnode, *ptr;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	ptr = *head;

	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	newnode->next = ptr->next;
	ptr->next = newnode;
	return (newnode);

}
