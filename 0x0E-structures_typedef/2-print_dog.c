#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that  prints a struct dog
 *
 * @d: variable of structure
 *
 * Return: returns void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}

