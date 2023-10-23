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

for (i = length; i >= 0; i--)
{
putchar(s[i]);
}
}
