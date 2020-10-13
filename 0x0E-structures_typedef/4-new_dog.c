#include <stdio.h>
#include "dog.h"

/**
* new_dog - intializes a new dog and set values
* @name:  name of dog
* @age:  age of dog
* @owner:  owner of dog
* Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}

