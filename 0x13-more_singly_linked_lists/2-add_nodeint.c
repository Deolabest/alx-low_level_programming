#include "lists.h"

/**
 * add_nodeint - This is for adding new node at the start of a linked list
 * @head: This is the first node pointer in the list
 * @n: This is data which will be inserted in that new node
 *
 * Return: new node pointer, or NULL incase it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
