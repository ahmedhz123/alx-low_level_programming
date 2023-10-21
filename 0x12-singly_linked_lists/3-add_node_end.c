#include "lists.h"

/**
 * add_node_end - A function that adds a node at the end
 *
 * @head: The head of the linked list
 * @str: the string of the node
 *
 * Return: the new linked list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i, count = 0;
	list_t *newnode, *tmp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next; /*to traverse over the linked list*/
		tmp->next = newnode;
	}
	return (*head);
}
