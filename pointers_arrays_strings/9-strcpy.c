#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
*/

char *_strcpy(char *dest, char *src)
{
int length = strlen(src);
int i;

for (i = 0; i < length; i++)
{
dest[i] = src[i];
}
putchar(*dest);
putchar('\n');
return (0);
}