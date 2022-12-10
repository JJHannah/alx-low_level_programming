#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node to front of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_mem;
	new_mem = malloc(sizeof(dlistint_t));

	if (new_mem == NULL)
	return (NULL);

	new_mem->n = n;
	new_mem->prev = NULL;
	new_mem->next = *head;
	
	if (*head != NULL)
		(*head)->prev = new_mem;
	*head = new_mem;
	
	return (new_mem);
	}
