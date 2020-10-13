#include "dog.h"

/**
* init_dog - initializes the values inside of a dog 
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

