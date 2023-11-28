#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    unsigned int len = 0;

    // Allouer de la mémoire pour le nouveau nœud
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    // Dupliquer la chaîne et calculer sa longueur
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

    // Si la liste est vide, mettre à jour le pointeur de tête
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        // Parcourir la liste jusqu'à atteindre le dernier nœud
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;

        // Ajouter le nouveau nœud à la fin de la liste
        temp->next = new_node;
    }

    return new_node;
}
