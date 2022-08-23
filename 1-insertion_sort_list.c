#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	int tmp;

	if (!list && !*list)
		return;
	while ((current = current->next))
	{
		if (current->n > current->next->n)
		{
			tmp = current->n;
			current->n = current->next->n;
			current->next->n = tmp;
			print_list(*list);
		}
	}
}
