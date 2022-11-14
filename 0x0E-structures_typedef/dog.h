#ifndef DOG_H
#define DOG_H

/**
 * struct dog - User defined data type.
 * @name: Structure member char pointer
 * @age: Structure member float.
 * @owner: Structure member char pointer.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* call my dog dog_t*/
typedef struct dog dog_t;

/*prototype of my fuctions*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
