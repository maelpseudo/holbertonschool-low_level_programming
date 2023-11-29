#include "lists.h"

/**
 * print_list - function that prints all the elements of list
 *
 * @h: pointer to next node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t nodes = 0;

while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");

nodes++;
h = h->next;
}

return nodes;
}
