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
    if (d == NULL)
    {
    printf("Name: (nil)\n");
    printf("Age: (nil)\n");
    printf("Owner: (nil)\n");
    }
    else
    {
    printf("Name: %s\n", d->name);
    printf("Age: %f\n", d->age);
    printf("Owner: %s\n", d->owner);
    }
}
