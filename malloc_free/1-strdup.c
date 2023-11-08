#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * 
 * 
 * 
*/

char *_strdup(char *str)
{
	char *new_str;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	new_str = malloc(sizeof(char) * len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[len] = '\0';
	return (new_str);
}
