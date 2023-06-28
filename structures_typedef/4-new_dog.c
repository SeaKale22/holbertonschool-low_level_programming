#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog- makes a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(strlen(name) + 1);
	newdog->owner = malloc(strlen(owner) + 1);
	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);
	newdog->age = age;
	strcpy(newdog->owner, owner);

	return (newdog);
}
