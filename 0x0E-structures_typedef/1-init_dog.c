#include "dog.h"

/**
 * init_dog - initialize the dog object
 *
 * @d: address of declared dog variable
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
