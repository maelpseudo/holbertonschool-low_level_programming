#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: iterate array
 * @size: array size
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (action == NULL || array == NULL)
return;
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
