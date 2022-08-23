#include "sort.h"

/**
* selection_sort - sort array from min to max
* by selection
* @array: array
* @size: size
* Return: nothing
*/
void selection_sort(int *array, size_t size)
{
	unsigned int min_ix, i, j;
	int tmp;

	if (!array)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_ix = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_ix])
				min_ix = j;
		}
		tmp = array[min_ix];
		array[min_ix] = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
}
