#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of the linked list
 *
 * @head: the head of linked list
 * @n: the data
 *
 * Return: the address of the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (head == NULL || newnode == NULL)
	{
		newnode->next = NULL;
		newnode->n = n;
	}
	if (*head)
	{
		newnode->next = *head;
		newnode->n = n;
	}
	*head = newnode;
	return (newnode);
}
