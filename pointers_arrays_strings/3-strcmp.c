#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
 * 
 * 
*/

int _strcmp(char *s1, char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);


    if (len1 == len2)
    {
        return (0);
    }
    else if (len1 < len2)
    {
        len1 = -len1;
        return (len1);
    }
    else
    {
        return (len1);
    }
}