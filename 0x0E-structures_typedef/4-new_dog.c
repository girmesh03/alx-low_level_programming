#include <stdlib.h>
#include "dog.h"

/**
 * get_string_len - Gets the length of a string.
 * @string: A string length to be calculated.
 * Return: Length of a string
 */

int get_string_len(char *string)
{
	int length = 0, index;

	for (index = 0; string[index] != '\0'; index++)
		length++;

	return (length);
}

/**
 * copy - Copy a string source to destination.
 * @s1: Destination.
 * @s2: Source.
 * Return: A new string.
 */

char *copy(char *s1, char *s2)
{
	int index;

	for (index = 0; s2[index] != '\0'; index++)
		s1[index] = s2[index];

	s1[index] = '\0';

	return (s1);
}

/**
 * new_dog - Creates a new user defined object.
 * @name: Member to hold name
 * @age: Member to hold age
 * @owner: Member to hold owner
 * Return: A new object.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	/* return if members are null */
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* allocate space for dog_t */
	mydog = malloc(sizeof(dog_t));

	/* return if allocation fails */
	if (mydog == NULL)
		return (NULL);

	/* allocate space for name */
	mydog->name = malloc((get_string_len(name) + 1) * sizeof(char));

	/* return null if allocation for name fails */
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}

	/* allocate space for owner */
	mydog->owner = malloc((get_string_len(owner) + 1) * sizeof(char));

	/* return null if allocation for owner fails */
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}

	/* set all members */
	mydog->name = copy(mydog->name, name);
	mydog->age = age;
	mydog->owner = copy(mydog->owner, owner);

	/* return the new dog */
	return (mydog);
}
