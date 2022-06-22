#include "dog.h"
#include <stdio.h>

/**
 * print_dog - initialize the dog object
 *
 * @d: address of declared dog variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		char *owner = d->owner ? d->owner : "(nil)";
		char *name = d->name ? d->name : "(nil)";
		float age = d->age;

		printf("Name: %s\n", name);

		if (age)
		{
			printf("Age: %f\n", age);
		}
		else
		{
			printf("Age: %s\n", "(nil)");
		}

		printf("Owner: %s\n", owner);
	}
}
