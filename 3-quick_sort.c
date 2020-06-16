#include "sort.h"

/**
 * swap - function that swap values
 * @a: firts value
 * @b: second value
 * Return: Void
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - function to sort
 * @array: array
 * @size: size array
 * @low: divider
 * @high: divider
 * Return: value
 */
int partition(int *array, size_t size, int low, int high)
{
	int *pivot, hi, low1;

	pivot = array + high;
	for (hi = low1 = low; low1 < high; low1++)
	{
		if (array[low1] < *pivot)
		{
			if (hi < low1)
			{
				swap(array + low1, array + hi);
				print_array(array, size);
			}
			hi++;
		}
	}

	if (array[hi] > *pivot)
	{
		swap(array + hi, pivot);
		print_array(array, size);
	}
	return (hi);
}

/**
 * partition_lomuto - recursive function
 *@array: array
 *@size: size of the array
 *@low: divider
 *@high: divider
 */
void partition_lomuto(int *array, size_t size, int low, int high)
{
	int part;

	if (high - low > 0)
	{
		part = partition(array, size, low, high);
		partition_lomuto(array, size, low, part - 1);
		partition_lomuto(array, size, part + 1, high);
	}
}

/**
 * quick_sort - funtion that sort
 *@array: array
 *@size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	partition_lomuto(array, size, 0, size - 1);
}
