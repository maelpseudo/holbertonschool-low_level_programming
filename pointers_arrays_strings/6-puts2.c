#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
*/

void puts2(char *str)
{

int i;
int length = strlen(str);

for (i = 0; i <= length; i++)
{
if (i % 2 == 0)
{
    putchar(str);
}
}
}