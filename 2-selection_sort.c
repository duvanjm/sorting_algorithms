#include "sort.h"

/**
 * selection_sort - function that sort
 * @array: array
 * @size: size of the array
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, x;
	int min, aux, tmp;

	if (array == NULL || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		aux = i;
		min = array[i];
		for (x = i + 1; x < size; x++)
		{
			if (array[x] < min)
			{
				min = array[x];
				aux = x;
			}
		}
		if (aux)
		{
			tmp = array[i];
			array[i] = min;
			array[aux] = tmp;
			print_array(array, size);
		}
	}
}
