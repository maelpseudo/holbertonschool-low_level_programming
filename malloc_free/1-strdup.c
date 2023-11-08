#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strdup - function that returns a pointer to a newly allocated space in memory
 * @str: char to an integer
 * Return: str2
*/

char *_strdup(char *str)
{
char *str2;
int i, len;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
str2 = malloc(sizeof(char) * len + 1);
if (str2 == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
str2[i] = str[i];
}
str2[len] = '\0';
return (str2);
}
