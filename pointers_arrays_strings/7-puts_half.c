#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
*/

void puts_half(char *str)
{
int i;
int length = strlen(str);
for (i = 0; i <= length/2; i++)
{
putchar(str[i]);
}
}
