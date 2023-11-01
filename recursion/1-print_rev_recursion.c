#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
*/

void _print_rev_recursion(char *s)
{
    int i, len = strlen(s);

    for (i = len; i > 0; i--)
    {
        printf ("%c", s[i]);
    }
    putchar ('\n');
}
