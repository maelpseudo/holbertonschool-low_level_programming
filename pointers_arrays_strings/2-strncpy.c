#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
 * 
*/

char *_strncpy(char *dest, char *src, int n)
{
    int i, j;
    int length = strlen(*dest);

    for (; 0 <= n; n--)
    {
        for (j = 0; j <= length; j++)
        {
            dest[j] = dest[j] + src[j];
        }
    }
    return (0);
}