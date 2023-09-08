#include <stdlib.h>

/* Function prototype for _copy_memory */
void _copy_memory(void *new_ptr, void *old_ptr,
		unsigned int old_size, unsigned int new_size);

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size in bytes of the old allocated space for ptr.
 * @new_size: New size in bytes of the memory block.
 *
 * Return: Pointer to the newly allocated memory block.
 *         If new_size > old_size, the added memory is not initialized.
 *         If new_size == old_size, do nothing and return ptr.
 *         If ptr is NULL, equivalent to malloc(new_size).
 *         If new_size is 0 and ptr is not NULL, free(ptr) and return NULL.
 *         If malloc fails, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	_copy_memory(new_ptr, ptr, old_size, new_size);
	free(ptr);

	return (new_ptr);
}

/**
 * _copy_memory - Copies memory from old_ptr to new_ptr.
 * @new_ptr: Pointer to the newly allocated memory.
 * @old_ptr: Pointer to the old memory.
 * @old_size: Size in bytes of the old memory.
 * @new_size: New size in bytes of the memory block.
 */
void _copy_memory(void *new_ptr, void *old_ptr,
		unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned int min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)old_ptr + i);
	}
}
