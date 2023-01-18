#ifndef DOG_H
#define DOG_H

/**
 * struct dog - elements for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: struct called "dog" that stores its name, its age, and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
