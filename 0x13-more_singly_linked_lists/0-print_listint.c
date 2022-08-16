#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print elements of a singly linkedlist
 * @h: pointer to a list
 * Retur: interger
 **/

size_t print_listint(const istint_t *h)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
