#ifndef DOG_H
#define DOG_H

/**
 * struct dog - elements for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: struct called "dog" that stores its name, its age, and owner
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
