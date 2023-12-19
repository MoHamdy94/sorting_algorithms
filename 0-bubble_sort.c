#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, n, new_n;
	int swap_temp;

	if (array == NULL || size < 2)
		return;

	n = size;
	while (n > 0)
	{
		new_n = 0;
		for (idx = 0; idx < n - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				swap_temp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = swap_temp;
				new_n = idx + 1;
				print_array(array, size);
			}
		}
		n = new_n;
	}
}
