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
