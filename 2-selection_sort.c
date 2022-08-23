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
	unsigned int min_ix, i, j, asc;
	int tmp;

	if (!array)
		return;
	for (asc = 0; as < size - 1; asc++)
	{
		if (array[asc] < array[asc + 1])
		{
			print_array(array, size);
			return;
		}
	}
	for (i = 0; i < size - 1; i++)
	{
		min_ix = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_ix])
				min_ix = j;
		}
		if (array[i] < array[i + 1])
		{
			print_array(array, size);
		}
		else
		{
			tmp = array[min_ix];
			array[min_ix] = array[i];
			array[i] = tmp;
		}
		print_array(array, size);
	}
}
