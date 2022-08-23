#include "sort.h"

/**
* insertion_sort_list - change place
* of node min to max
* @list: head of node
* Return: nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;

	if (!list || !*list)
		return;
	while ((current = current->next))
	{
		if (current->n > current->next->n)
		{
			if (current->prev)
				current->prev->next = current->next;

			if (current->next->next)
   				current->next->next->prev = current;

			current->next  = current->next->next;
			current->next->prev = current->prev;

			current->next->next = current;
			current->prev = current->next;
			print_list(*list);
		}
	}
}
