#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
*/

void rev_string(char *s)
{
int length = strlen(s);
int i;

if (length != 0)
{
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
}
}
