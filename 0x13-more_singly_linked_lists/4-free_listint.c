#include "lists.h"

/**
 * free_listint - This will free a linked list
 * @head: for freeing the listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
