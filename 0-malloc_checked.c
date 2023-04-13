#include "main.h"
#include <stdio.h>

/**
 * Main -  allocates memory using malloc.
 * @b: Number of bytes to allocate.
 * Returns: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
