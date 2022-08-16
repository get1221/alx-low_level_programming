#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - find a node in a list
 * @head: Address of the first node in a list
 * @index: postion of the node to find
 * Return: Node Address
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
		return (NULL);
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
