#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @name: parameter is chareter
 *
 * @age: parameter is float
 *
 * @owner: parameter is chareter
 *
 * @d: variable of structure
 *
 * Return: returns void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
