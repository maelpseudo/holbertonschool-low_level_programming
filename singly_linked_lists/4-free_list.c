#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: The pointer to the first node of linked list
 * Return: void
 */

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
