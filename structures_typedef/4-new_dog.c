#include "dog.h"
#include <stdlib.h>
/**
 * new_dog- makes a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	 dog_t *newdog;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
