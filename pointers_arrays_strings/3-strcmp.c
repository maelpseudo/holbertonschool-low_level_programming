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
    int i;

    if (*s1 == *s2)
    {
        return (0);
    }
    else if (*s1 < *s2)
    {
        return (-1);
    }
    else
    {
        return (1);
    }
    
}