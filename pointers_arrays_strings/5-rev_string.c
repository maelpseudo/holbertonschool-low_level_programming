#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: input integer
 * return: void
*/

void rev_string(char *s)
{
int i, j;
int len = strlen(s);
char k;

for (i = len - 1, j = 0; i > j; i--, j++)
{
k = s[i];
s[i] = s[j];
s[j] = k;
}
}
