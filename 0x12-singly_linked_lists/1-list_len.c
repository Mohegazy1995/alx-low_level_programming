#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @*h:  pointer to the list_t list.
 *
 * return:  number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t Nof_Elements = 0;

	while(h)
	{
		Nof_Elements++;

		h = h->next;
	}
	return (Nof_Elements);
}

