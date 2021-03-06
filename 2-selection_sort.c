#include "sort.h"

/**
 * selection_sort - function that sort
 * @array: array
 * @size: size of the array
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, x, aux;
	int min, tmp;

	if (array == NULL || size < 2)
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
		if (aux != i)
		{
			tmp = array[i];
			array[i] = min;
			array[aux] = tmp;
			print_array(array, size);
		}
	}
}
