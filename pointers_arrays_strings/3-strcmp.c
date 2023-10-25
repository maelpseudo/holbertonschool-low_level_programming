#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - a function that compare two strings
 * @s1: a pointer to a char
 * @s2: a pointer to a char
 * Return: negative if s1 is shorter than s2, positive if s1 is longer than s2, 0 if same
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
return (13);
}
else
{
return (-13);
}
}