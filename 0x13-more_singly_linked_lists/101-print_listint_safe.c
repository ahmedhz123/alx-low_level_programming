#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - reallocate the memory for an array of pointers
 *
 * @list: the old list to append
 * @size: the size of the new list
 * @ptr: new node to be added to the list
 *
 * Return: pointer to the new list
*/

const listint_t **_r(const listint_t **list, size_t size, const listint_t *ptr)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(sizeof(listint_t *) * size);
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
	{
		newlist[i] = list[i];
	}
	newlist[i] = ptr;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - A function that prints the linked list
 *
 * @head: the head of the linked list
 *
 * Return: unsigned integer
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
