#include "sort.h"

/**
 * swap_integer - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_integer(int *x, int *y)
{
	int swap_tmp;

	swap_tmp = *x;
	*x = *y;
	*y = swap_tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap_tmp, j, k;

	if (array == NULL || size < 2)
		return;

	for (gap_tmp = 1; gap_tmp < (size / 3);)
		gap_tmp = gap_tmp * 3 + 1;

	for (; gap_tmp >= 1; gap_tmp /= 3)
	{
		for (j = gap_tmp; j < size; j++)
		{
			k = j;
			while (k >= gap_tmp && array[k - gap_tmp] > array[k])
			{
				swap_integer(array + k, array + (k - gap_tmp));
				k -= gap_tmp;
			}
		}
		print_array(array, size);
	}
}
