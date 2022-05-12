#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog struct
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, nname, nowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || owner == NULL || name == NULL)
	{
		free(p_dog);
		return (NULL);
	}

	for (nname = 0; name[nname]; nname++)
		;

	for (nowner = 0; owner[nowner]; nowner++)
		;

	p_dog->name = malloc(nname + 1);
	p_dog->owner = malloc(nowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < nname; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < nowner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
