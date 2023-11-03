#include "main.h"
#include <stdio.h>

/**
 * 
 * 
 * 
*/


int main(int argc, char *argv[])
{
int i = 0;
int sum = 0;
int isValid = 1;
if (argc == 1)
{
printf("0\n");
return (0);
}
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
int currentNum = atoi(argv[i]);
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
