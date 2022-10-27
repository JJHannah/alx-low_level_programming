#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head pointer of linked list
 * @index: nth node
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;

if (head == NULL)
return (NULL);

while ((x < index) && head != NULL)
{
head = head->next;
x++;
}
if (x == index)
return (head);

return (NULL);
}
