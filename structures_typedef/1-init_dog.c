#include "dog.h"
#include <stddef.h>
/**
 * init_dog- initalize a variable of type dog
 * @d: variable
 * @name: Naame of dog
 * @age: age of dog
 * @owner: owner of dog
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
