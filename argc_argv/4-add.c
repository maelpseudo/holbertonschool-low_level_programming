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
int i, sum = 0;
if (argc == 1) {
printf("0\n");
return (0);
}
int currentNum;
for (i = 1; i < argc; i++)
{
int j = 0;
while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
currentNum = atoi(argv[i]);
if (currentNum < 0)
{
printf("Error\n");
return (1);
}
sum += currentNum;
}
printf("%d\n", sum);
return (0);
}