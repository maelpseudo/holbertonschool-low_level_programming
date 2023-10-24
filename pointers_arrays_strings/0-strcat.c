#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
*/

char *_strcat(char *dest, char *src)
{

    int i, j;

    putchar(*dest);
    putchar('\n');
    putchar(*src);
    putchar('\n');

    while(dest[i]!='\0')
  i++;
  while(src[j]!='\0')
  {
    dest[i]=src[j];
    j++;
    i++;
  }
  dest[i]='\0';
  putchar(*dest);
  putchar('\n');
  putchar(*src);
  putchar('\n');
  putchar(*dest);
  putchar('\n');
  return (0);
}