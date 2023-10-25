#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find the loop point in the linked list
 *
 * @head: the head of the linked list
 *
 * Return: the address of the loop point
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
