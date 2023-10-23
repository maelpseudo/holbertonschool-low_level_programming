#include "main.h"
#include <stdio.h>
#include <string.h>  

/**
 * print_rev - function that reverse a string
 * @s: input integer
 * Result: void
*/

void print_rev(char *s)
{
int length = strlen(s);
int i;

for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
