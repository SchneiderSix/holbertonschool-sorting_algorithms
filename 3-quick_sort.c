#include "sort.h"


/**
* partition - lomuto scheme partition
* @array: array
* @low: lowest index
* @high: highest index
* @size: size
* Return: index at pivot
*/
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], small = low, j, tmp;

	for (j = low; j < high; j++)
	{
		/* smaller or equal than pivot */
		if (array[j] <= pivot)
		{
			tmp = array[small];
			array[small] = array[j];
			array[j] = tmp;
			if (small != j)
				print_array(array, size);
			small++;
		}
	}

		tmp = array[small];
		array[small] = array[high];
		array[high] = tmp;
		if (small != high)
			print_array(array, size);
	return (small);
}

/**
* recursive_sort - recursive function to partition
* depending on pivot
* @array: array
* @low: lowest index
* @high: highest index
* @size: size
* Return: nothing
*/
void recursive_sort(int *array, int low, int high, size_t size)
{
	int partytion;

	if (low < high)
	{
		partytion = partition(array, low, high, size);
		recursive_sort(array, low, partytion - 1, size);
		recursive_sort(array, partytion + 1, high, size);
	}
}

/**
* quick_sort - sort array in asc
* @array: array
* @size: size
* Return: nothing
*/
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	recursive_sort(array, 0, size - 1, size);
}
