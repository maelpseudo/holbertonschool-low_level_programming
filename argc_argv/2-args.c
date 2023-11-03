#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: input integer
 * @argv: input integer
 * Return: 0 (Success)
*/


int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++) {
printf("%s\n", argv[i]);
}
return (0);
}
