#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - This is a sorting function that sorts an array
 * containing integers in an ascending order using the bubble
 * sort algorithm
 *
 * @array: An array containing integers
 * @size: The number of elements/integers in the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	int temp; /*temp is temporary variable used for swapping elements*/
	int indicate; /*indicate if swaps are made while passing through the array*/
	size_t i;

	if (size < 2)
		return;
	do {
		indicate = 0;

		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				indicate = 1;
				print_array(array, size);
			}
		}
	} while (indicate);
}
