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
if (nmemb == 0 || size == 0)
{
return (NULL);
}

void *ptr = malloc(nmemb * size);

if (ptr != NULL)
{
memset(ptr, 0, nmemb * size);
}

return (ptr);
}
