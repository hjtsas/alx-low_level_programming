#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - initialize a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @age: age to initalize
 * @name: name to initalize
 * @owner: owner to initalize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
