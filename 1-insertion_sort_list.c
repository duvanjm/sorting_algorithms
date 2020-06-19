#include "sort.h"

/**
 * insertion_sort_list - function that sort a list
 * @list: list that i'll sort
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;
	aux = (*list)->next;
	while (aux != NULL)
	{
		while (aux->prev && aux->n < aux->prev->n)
		{
			aux->prev->next = aux->next;
			if (aux->next != NULL)
				aux->next->prev = aux->prev;

			aux->next = aux->prev;
			aux->prev = aux->prev->prev;
			aux->next->prev = aux;

			if (aux->prev == NULL)
				*list = aux;

			else
			{
				aux->prev->next = aux;
			}
			print_list(*list);
		}
		aux = aux->next;
	}
}
