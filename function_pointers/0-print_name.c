#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name to print
 * @f: a pointer to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
return;
}
f(name);
}
