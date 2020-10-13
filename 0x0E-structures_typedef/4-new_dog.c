#include <stdlib.h>
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
	char *namecopy = name;
	char *ownercopy = owner;

	if (new == NULL)
		return (NULL);
	if (namecopy != NULL)
		new->name = namecopy;
	new->age = age;
	if (ownercopy != NULL)
	new->owner = ownercopy;
	return (new);
}

