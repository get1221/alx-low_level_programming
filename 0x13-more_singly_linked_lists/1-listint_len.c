#include "lists.h"

/**
 * listint_len - calculate the number of ele
 * @h: pointer to list
 * Return: int
 **/

size_T listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
