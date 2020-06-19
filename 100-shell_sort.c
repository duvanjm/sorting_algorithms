#include "sort.h"

/**
 * shell_sort - function that sort
 * @array: array
 * @size: size of the array
 * Return: Void
 */

void shell_sort(int *array, size_t size)
{
	unsigned int i, gap, o = 0;

	if (array == NULL || size < 2)
		return;

	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}

	while (gap != 0)
	{
		for (i = gap; i < size; i++)
		{
			while (array[gap] > array[o])
			{
				array[gap] = array[o];
			}
			print_array(array, size);
		}
	}
}
