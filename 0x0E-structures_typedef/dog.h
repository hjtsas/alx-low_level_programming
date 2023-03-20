#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second memeber
 * @owner: Third member
 * Describtion: describtion
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
/* dog_t - typedef for struct */

typedef struct dod dog_t;

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
coid free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

