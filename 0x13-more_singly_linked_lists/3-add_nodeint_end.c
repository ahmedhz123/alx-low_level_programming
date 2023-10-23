#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the linked list
 *
 * @head: the head of the linked list
 * @n: the data of each node in the linked list
 *
 * Return: the address of the newnode
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (head == NULL || newnode == NULL)
	{
		return (NULL);
	}
	newnode->next = NULL;
	newnode->n = n;
	if (!*head)
	{
		*head = newnode;
	}
	else
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = newnode;
	}
	return (newnode);
}
