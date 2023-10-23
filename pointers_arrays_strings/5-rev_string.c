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
int len = strlen(s);
int i;

for (i = len; i >= 0; i--)
{
putchar(*s[i]);
}
}
