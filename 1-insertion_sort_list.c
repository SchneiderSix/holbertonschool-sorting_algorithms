#include "sort.h"

/**
* insertion_sort_list - change place
* of node min to max
* @list: node
* Return: nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *nex = (*list)->next;

	if (!list || !*list)
		return;
	while (nex = nex->next)
	{
		while (nex->prev && nex->prev->n > nex->n)
		{
			nex->prev->next = nex->next;

			if (nex->next)
   				nex->next->prev = nex->prev;
			nex->next = nex->prev;

			if (nex->next)
			{
				nex->prev = nex->next->prev;
				nex->next->prev = nex;
			}

			if (!nex->prev)
				nex = *list;
			else
				nex->prev->next = nex;
			print_list(*list);
		}
	}
}
