#include "dog.h"

/**
 * new_dog: creates new dog
 *
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the onwer of the new dog
 *
 * Retunr: the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog dog_t *newDog;

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	if (newDog == NULL)
		return (NULL);
	return (newDog);
}
