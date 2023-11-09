#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: result or null if result is null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = (s1 != NULL) ? strlen(s1) : 0;
unsigned int s2_len = (s2 != NULL) ? strlen(s2) : 0;

if (n >= s2_len)
{
n = s2_len;
}

char *result = malloc(s1_len + n + 1);

if (result == NULL)
{
return (NULL);
}

if (s1 != NULL)
{
strcpy(result, s1);
}
else
{
result[0] = '\0';
}

strncat(result + s1_len, s2, n);

result[s1_len + n] = '\0';
return (result);
}
