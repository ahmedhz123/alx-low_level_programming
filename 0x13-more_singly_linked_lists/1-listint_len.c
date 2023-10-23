#include "lists.h"

/**
 * listint_len - A function that counts the number of element
 *		A linked list
 *
 * @h: the head of the linked list
 *
 * Return: the length of the linked list
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);

}
