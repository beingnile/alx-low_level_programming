#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Type describing dog.
 *
 * @name: String, name of dog.
 * @age: Float, age of dog.
 * @owner: String, dog owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
