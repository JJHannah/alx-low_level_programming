#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to head pointer of linked list
 * @idx: index to insert new node
 * @n: new node's data
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *new;
listint_t *h;

h = *head;

if (idx != 0)
{
for (x = 0; x < idx - 1 && h != NULL; x++)
{
h = h->next;
}
}
if (h == NULL && idx != 0)
return (NULL);

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
}
else
{
new->next = h->next;
h->next = new;
}
return (new);
}
