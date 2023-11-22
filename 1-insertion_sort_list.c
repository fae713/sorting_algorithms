#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - This function sorts a doubly
 * linked list of integers in an ascending order.
 *
 * @list: A doubly linked list
 *
 * Returns: Nothing
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *present, *temp; /*for swapping and passing elements*/

	if (!list) /*if 'list' is NULL, return early [Nothing to sort]*/
		return;

	for (present = *list; present; present = present->next)
	{
		while (present->next && (present->next->n < present->n))
		{
			temp = present->next;
			present->next = temp->next;
			temp->prev = present->prev;

			if (present->prev)
				present->prev->next = temp;
			if (temp->next)
				temp->next->prev = present;

			present->prev = temp;
			temp->next = present;

			if (temp->prev)
				present = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
	}
}
