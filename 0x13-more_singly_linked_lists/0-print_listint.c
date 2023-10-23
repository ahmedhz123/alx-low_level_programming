#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in the linked list
 *
 * @h: the head of the linked list
 *
 * Return: 0 Always (success)
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
