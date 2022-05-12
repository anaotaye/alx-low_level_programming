#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - contains information about a dog
 * @name: pointer to name of dogg
 * @age: age of dog
 * @owner: pointer to owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
