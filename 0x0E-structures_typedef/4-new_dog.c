#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * _strlen - a function that returns the lenght of a string
 *
 * @s: char parameter
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;
	return (counter);
}

/**
 * _strcpy - function name
 *
 * @dest: function parameter 1
 * @src: function parameter 2
 *
 * Return: always 0
 *
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog: creates new dog
 *
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the onwer of the new dog
 *
 * Return: the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		return (NULL);
		free(dog);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
