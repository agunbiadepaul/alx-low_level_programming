#include "lists.h"

/**
 * print_list - prints the list of the elements of the list_t
 * @h: A pointer to head of the list_t list
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
        size_t numb_of_node = 0;

        while (h != NULL)
        {
		numb_of_node++;
		h = h->next;
	}

	return (numb_of_node);
}
