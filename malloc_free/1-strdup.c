#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * 
 * 
 * 
*/

char *_strdup(char *str)
{
if(str == NULL)
{
return (NULL);
}
else
{
int len = strlen(str);
char *dup, i;
dup = (char *)malloc(sizeof(char) * (len + 1));
strcpy(dup, str);
return (dup);
free(dup);
}
}
