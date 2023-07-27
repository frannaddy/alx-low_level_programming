#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Realease memory allocated for a list
 *
 * @head: Pointer to the first node of the list to free
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
