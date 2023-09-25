#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all of a listint_t list elements.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t numb_of_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb_of_node++;
	}

	printf("-> %lu elements\n", numb_of_node);

	return (numb_of_node);
}
