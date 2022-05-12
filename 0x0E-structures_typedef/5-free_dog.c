#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free allocated space for dog struct
 * @d: pointer to struct
 *
 * Return: nothing to return
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
