#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: A pointer of struct dog
 *
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		printf("Onwer: %s\n", d->owner);
	}
	if (*d == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: (nill)\n");
	}
	if (d == NULL)
	{
		printf("");
	}

}
