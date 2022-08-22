#include "sort.h"

/**
* bubble_sort - sort numbers from smallest to largest
* @array: explicit name
* @size: explicit name
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;
	int tmp;

	print_array(array, size);
	printf("\n");
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
	printf("\n");
	print_array(array, size);
}
