#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node aat the end
 * @head: add of the first node
 * @n: int to insert to new node
 * Return: Add of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
