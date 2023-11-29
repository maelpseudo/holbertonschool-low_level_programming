#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - new node at the end
 * @head: a pointer to the first node in the list
 * @str: pointer to character
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
unsigned int len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return NULL;

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return NULL;
}
while (str[len])
len++;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;
}

return new_node;
}
