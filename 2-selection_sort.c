#include "sort.h"
/**
* selection_sort - Sort an array of integers in ascending order
*                  using the selection sort algorithm.
* @array: array to sort
* @size: size of array
* Description: Prints the array after each swap.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_pos, swap_tmp, idx;

	for (i = 0; i < size; i++)
	{
		min_pos = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min_pos > array[j])
			{
				min_pos = array[j];
				idx = j;
			}
		}
		if (min_pos != array[i])
		{
			swap_tmp = array[i];
			array[i] = min_pos;
			array[idx] = swap_tmp;
			print_array(array, size);
		}
	}
}
