#include "search_algos.h"

/*
*int linear_search - search for value in an array of integers
*@array: pointer to first array
*@size: number of elements in array
*@value: search value
*return: -1 if value not present in array
*/

int linear_search(int *array, size_t size, int value)
{
    int x;
    if (!array)
        return (-1);

    for (x = 0; x < (int) size; x++)
    {
        if (array[x] != value)
            printf("Value checked array[%d] = [%d]\n", x, array[x]);
        else
            printf("Value checked array[%d] = [%d]\n", x, array[x]);
    }
    return (-1);
}