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
if ((length/2) % 2 == 0)
{
for (i = length/2 + 1; i < length; i++)
{
putchar(str[i]);
}
}
else
{
for (i = length/2; i < length; i++)
{
putchar(str[i]);
}
}
putchar('\n');
}
