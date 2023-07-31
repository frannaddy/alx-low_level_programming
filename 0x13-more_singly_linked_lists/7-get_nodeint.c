#include "lists.h"

/**
 * get_nodeint_at_index - the node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: the index is the index of the node
 *
 * Return: pointer of Index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
