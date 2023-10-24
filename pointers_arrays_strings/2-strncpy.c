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
    int j;
    int length = strlen(dest);

    for (; n >= 0; n--)
    {
        for (j = 0; j <= length; j++)
        {
            dest[j] = dest[j] + src[j];
        }
    }
    return (0);
}