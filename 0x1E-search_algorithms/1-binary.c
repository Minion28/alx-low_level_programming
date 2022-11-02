#include "search_algos.h"

/**
* binary_search - search for a value in a sorted array using binary
* @array: first element pointer
* @size: number of elements in array
* @value: search value
* Return: -1 if value is not present
**/

int binary_search(int *array, size_t size, int value)
{
	unsigned int x = 0;
	unsigned int y = size - 1;
	int z;
	if (array == NULL)
		return (-1);
	if (size == 1)
	{
		return (array[x]);
	}
	while (y >= x)
	{
		if (x == 0 && y == 0)
			return (-1);
		print_array(array, x, y);
		z = (y + x) / 2;
		if (array[z] == value)
			return (array[z]);
		else if (array[z] < value)
		{
			x = z + 1;
		}
		else if (array[z] > value)
		{
			y = z;
		}
	}
	return (-1);
}

/**
* print_array - prints array
* @array: array
* @y:  starting point
* @z: ending point
* Return nothing
**/

void print_array(int *array, size_t y, size_t z)
{
	unsigned int a;

	printf("Searching in array: ");
	for (a = y; a < z; a++)
	{
		printf("%d, ", array[a]);
	}
	printf("%d\n", array[z]);
}