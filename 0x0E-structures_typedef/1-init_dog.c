#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes the members.
 * @d: User defined data type dog d.
 * @name: Member to hold name.
 * @age: Member to hold age.
 * @owner: Member to hold owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
