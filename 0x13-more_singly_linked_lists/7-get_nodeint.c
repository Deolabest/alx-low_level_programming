#include "lists.h"

/**
 * get_nodeint_at_index - for returning the node at a defined index in a linked list
 * @head: first node in the linked list
 * @index: index of the node which is to be returned
 *
 * Return: pointer to the node we want, or NULL as the case may be
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
