#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node - function that adds a node to the beginning of linked list
  * @head: pointer to a list_t
  * @str: pointer to character
  *
  * Return: pointer to new node
  */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
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

    new_node->next = *head;
    *head = new_node;

    return new_node;
}
