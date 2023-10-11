#include "dog.h"

/**
 * init_dog - intializes the attributes of the struct dog
 *
 * @d: the pointer of dog type
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's onwer
 *
 * Description: how to intialize an object of struct
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = *name;
	d->age = age;
	d->owner = *owner;
}
