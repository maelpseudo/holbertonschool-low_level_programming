#include "main.h"
#include <stdio.h>

/**
 * 
 * 
 * 
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
int i, j;
int res = 0;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
res += atoi(argv[i]);
}
printf("%d\n", res);
}
return (0);
}