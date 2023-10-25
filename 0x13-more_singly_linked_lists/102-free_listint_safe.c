#include "lists.h"
#include <stdlib.h>

/**
 * find_loop - Finds a loop in the linked list
 *
 * @head: The head of the linked list
 *
 * Return: The address where the loop start
*/

listint_t *find_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);

		for (ptr = head; ptr != NULL; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);

	}
	return (NULL);
}

/**
 * free_listint_safe - frees a linked list with loop
 *
 * @h: the head of the linked list
 *
 * Return: the size of the linked list
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *loopnode, *next;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = find_loop(*h);
	for (len = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
