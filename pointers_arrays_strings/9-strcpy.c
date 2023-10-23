#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - a function that copy a pointer
 * @dest: pointer to a character
 * @src: pointer to a character
 * return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int length = strlen(src);
int i;

for (i = 0; i < length; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
