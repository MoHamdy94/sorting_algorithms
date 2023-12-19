#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers
 *              in ascending order using the Quick sort algorithm
 * @array: array
 * @size: array's size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quickSo(array, 0, size - 1, size);
}

/**
 * division_partition - division_partition
 * @array: array
 * @start: start
 * @end: end
 * @size: array's size
 * Return: i
 */
int division_partition(int *array, int start, int end, size_t size)
{
	int i = start - 1, j = start;
	int pivot = array[end], aux = 0;

	for (; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[end])
	{
		aux = array[i + 1];
		array[i + 1] = array[end];
		array[end] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quickSo - quick sort
 * @array: given array
 * @start: start
 * @end: end
 * @size: array's size
 * Return: void
 */
void quickSo(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = division_partition(array, start, end, size);
		quickSo(array, start, pivot - 1, size);
		quickSo(array, pivot + 1, end, size);
	}
}
