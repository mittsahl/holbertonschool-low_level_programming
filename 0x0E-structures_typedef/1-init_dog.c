#include "dog.h"

/**
* init_dog - initializes the values inside of a dog
* @d: struct dog from main
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

