#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 *
 * @array: This is the array containing integers to be sorted.
 * @size: This is the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y; /* x and y are loop counters*/
	int min_index, min_val, indicate, temp;
	/**
	 * min_val - stores the minimum value found during each iteration.
	 * min_index - used to store the index of the minimum value.
	 * indicate - used to indicate whether a swap occured.
	 * temp - temporary variable for swapping elements in the array.
	 */

	if (size < 2)
		return;

	for (x = 0; x < size; x++)
	{
		min_val = array[x];
		min_index = x;
		indicate = 0;

		for (y = x + 1; y < size; y++)/*searches the unsorted part*/
		{
			if (min_val > array[y])/*check for min value*/
			{
				min_val = array[y];
				min_index = y;
				indicate = 1;
			}
		}

		if (indicate)
		{
			temp = array[x];
			array[x] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
