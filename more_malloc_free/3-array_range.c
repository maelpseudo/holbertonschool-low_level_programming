#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: input min integer
 * @max: input max integer
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
int *result;
int array_size;
int i;

if (min > max)
{
return (NULL);
}

array_size = max - min + 1;

result = malloc(array_size * sizeof(int));

if (result == NULL)
{
return (NULL);
}

for (i = 0; i < array_size; i++)
{
result[i] = min + i;
}

return (result);
}
