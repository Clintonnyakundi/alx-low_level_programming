#include "dog.h"
#include <stdio.h>
/**
 *print_dog - print struct dog
 *@d: pointer to type struct dog
 *
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (empty)\n");
	}
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (empty)\n");
	}
}
