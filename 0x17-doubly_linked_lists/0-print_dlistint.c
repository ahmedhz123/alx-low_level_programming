#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - print all elements in the dlistint_t list
 *
 * @h: the pointer of the linked list
 *
 * Return: the length of the linked list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
