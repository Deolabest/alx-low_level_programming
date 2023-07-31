#include "lists.h"

/**
 * pop_listint - for deleting the head node of a linked list
 * @head: first element pointer in the linked list
 *
 * Return: the data in the deleted elements
 * or 0 incase the list appears to be empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
