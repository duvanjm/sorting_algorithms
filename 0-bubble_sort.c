#include "sort.h"

/**
 * bubble_sort - function that sort an array
 * @array: array that i'll sort
 * @size: size of the array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, x;
	int aux;

	for (i = 0; i < size - 1; i++)
	{
		x = 0;
		while (x < size - i - 1)
		{
			if (array[x] > array[x + 1])
			{
				aux = array[x];
				array[x] = array[x + 1];
				array[x + 1] = aux;
				print_array(array, size);
			}
			x++;
		}
	}
}
