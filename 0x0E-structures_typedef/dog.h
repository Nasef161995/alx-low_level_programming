#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - is a dog structure
 * @name: First member is name
 * @age: Second member is age
 * @owner: Third member is owner
 *
 * Description: structure dog just a lone dog struct in a big kitty world
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);




#endif