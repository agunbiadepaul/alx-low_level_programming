#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the list of the elements of the list_t
 * @h: A pointer to head of the list_t list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numb_of_node = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		numb_of_node++;
	}

	return (numb_of_node);
}
