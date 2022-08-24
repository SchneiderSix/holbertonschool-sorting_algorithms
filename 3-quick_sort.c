#include "sort.h"


/**
* partition - lomuto scheme partition
* @array: array
* @low: lowest index
* @high: highest index
* Return: index at pivot
*/
int partition(int *array, int low, int high)
{
    int pivot = array[high], smaller = (low - 1), j, tmp;

    for (j = low; j <= high - 1; j++)
    {
        /* small or equal than pivot */
        if (array[j] <= pivot)
        {
            smaller++;
            tmp = smaller;
            smaller = j;
            j = tmp;
            print_array();
        }
    }
    tmp = smaller + 1;
    smaller + 1 = high;
    high = tmp;
    print_array();
    return (smaller + 1);
}

void recursive_sort(int *array, int low, int high)
{
    int partytion;

    if (low < high)
    {
        partytion = partition(array, low, high);
        recursive_sort(array, low, partytion - 1);
        recursive_sort(array, partytion + 1; high);
    }
}

void quick_sort(int *array, size_t size)
{
    if (!array)
        return;
    recursive_sort(array, 0 , size - 1);
}
