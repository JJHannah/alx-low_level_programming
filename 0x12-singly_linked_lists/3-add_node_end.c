#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node, *current_node;
size_t n;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
for (n = 0; str[n]; n++)
;
new_node->len = n;
new_node->next = NULL;
current_node = *head;

if (current_node == NULL)
{
*head = new_node;
}
else
{
while (current_node->next != NULL)
current_node = current_node->next;
current_node->next = new_node;
}
return (*head);
}
