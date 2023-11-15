#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable
 * @d: pointer
 * @name: pointer to char
 * @owner: pointer to char
 * @age: input float
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
