#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * 
 * 
 * 
*/

char *string_toupper(char *n)
{

int i;

for (i = 0; n[i] != '\0' ; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
}
return (n);
}
