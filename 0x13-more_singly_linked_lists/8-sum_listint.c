#include "lists.h"

/**
 * sum_listint - sum of all the data of a listint_t linked list.
 * @head: pointer to first node
 *
 * Return: adds all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
