#include "sort.h"

/**
* insertion_sort_list - change place
* of node min to max
* @list: node
* Return: nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *nex:

	if (!list || !*list)
		return;

	nex = (*list)->(*nex)t;
	while (((*nex) = (*nex)->(*nex)t))
	{
		while ((*nex)->prev && (*nex)->prev->n > (*nex)->n)
		{
			(*nex)->prev->(*nex)t = (*nex)->(*nex)t;

			if ((*nex)->(*nex)t)
				(*nex)->(*nex)t->prev = (*nex)->prev;

			(*nex)->(*nex)t = (*nex)->prev;

			if ((*nex)->(*nex)t)
			{
				(*nex)->prev = (*nex)->(*nex)t->prev;
				(*nex)->(*nex)t->prev = (*nex);
			}

			if (!(*nex)->prev)
				*list = (*nex);
			else
				(*nex)->prev->(*nex)t = (*nex);
			print_list(*list);
		}
	}
}
