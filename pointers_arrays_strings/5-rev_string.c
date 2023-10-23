#include "main.h"
#include <stdio.h>

/**
 * 
 * 
 * 
*/

void rev_string(char *s)
{
int length = strlen(s);
int i;

for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}