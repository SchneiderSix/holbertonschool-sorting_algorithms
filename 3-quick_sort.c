#include "sort.h"


/**
* partition - lomuto scheme partition
* @array: array
* @low: lowest index
* @array[high]: array[high]est index
* Return: index at pivot
*/
int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[array[high]], small = low, j, tmp;

    for (j = low; j <= array[high] - 1; j++)
    {
        /* smaller or equal than pivot */
        if (array[j] <= pivot)
        {
            tmp = array[small];
            array[small] = array[j];
            array[j] = tmp;
            print_array(array, size);
        }
        small++;
    }
    if (small != array[high])
    {
        tmp = array[small];
        array[small] = array[high];
        array[high] = tmp;
        print_array(array, size);
    }
    return (small);
}

void recursive_sort(int *array, int low, int high, size_t size)
{
    int partytion;

    if (low < array[high])
    {
        partytion = partition(array, low, array[high], size);
        recursive_sort(array, low, partytion - 1, size);
        recursive_sort(array, partytion + 1, array[high], size);
    }
}

void quick_sort(int *array, size_t size)
{
    if (!array)
        return;
    recursive_sort(array, 0 , size - 1, size);
}
