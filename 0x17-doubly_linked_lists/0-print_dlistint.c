#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - prints all data of doubly linked list
 *@h: pointer to head of list
 *Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;
	
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
