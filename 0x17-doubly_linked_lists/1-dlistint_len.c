#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - finds the lenght of the linked list
 *
 * @h: the pointer of the linked list
 *
 * Return: the size of the linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
