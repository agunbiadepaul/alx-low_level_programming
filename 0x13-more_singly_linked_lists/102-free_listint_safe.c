#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t node_count = 0;

	while (current != NULL)
	{
		node_count++;
		if (current <= current->next)
		{
			*h = NULL;
			return (node_count);
		}

		current = current->next;
		free(*h);
		*h = current;
	}

	*h = NULL;
	return (node_count);
}
