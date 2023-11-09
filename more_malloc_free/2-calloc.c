#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *arr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
else
arr = malloc(nmemb * size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
((char *)arr)[i] = 0;
}
return (arr);
}
