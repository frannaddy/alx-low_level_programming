#include "lists.h"

/**
 * print_listint -this will  prints all the elements of a listint_t list.
 *
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 *
 */

{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
