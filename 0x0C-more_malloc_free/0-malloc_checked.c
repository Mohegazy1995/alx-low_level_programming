#include "main.h"
#include <stdio.h>

/**
 * *malloc_checked  - allocates memory using malloc.
 * @b: Number of Byets to allocated in the memory.
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
