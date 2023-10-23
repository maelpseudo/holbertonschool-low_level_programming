#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that print 1/2 character 
 * @str: input integer
 * return: void
*/

void puts2(char *str)
{

int i;
int length = strlen(str);
if (length == 0)
{
    putchar('\n');
}
else
{
for (i = 0; i <= length; i++)
{
if (i % 2 == 0)
{
    putchar(str[i]);
}
}
}
putchar('\n');
}