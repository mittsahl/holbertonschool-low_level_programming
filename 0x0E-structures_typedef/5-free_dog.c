#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees a dog
* @d: dog from main
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

