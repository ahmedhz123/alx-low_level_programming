#include "lists.h"

/**
 * add_node - A function that adds new node at the beginning
 *
 * @head: the head of the linked list
 * @str: A string
 *
 * Return: return the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (newnode);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
