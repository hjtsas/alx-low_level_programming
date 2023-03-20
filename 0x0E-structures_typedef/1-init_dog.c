#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - initialize a variable
 * @d: pointer tothe struct dog
 * @age: age
 * @name: name
 * @owner: owner
 */

void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
