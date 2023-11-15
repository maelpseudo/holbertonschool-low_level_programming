#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct
 * Return: void
*/

void print_dog(struct dog *d)
{
    if (d->name == NULL)
    {
    printf("Name: (nil)\n");
    }
    else
    {
    printf("Name: %s\n", d->name);
    }
    if (d->age == NULL)
    {
    printf("Age: (nil)\n");
    }
    else
    {
    printf("Age: %s\n", d->age);
    }
    if (d->owner == NULL)
    {
    printf("Owner: (nil)\n");
    }
    else
    {
    printf("Owner: %s\n", d->owner);
    }
}
