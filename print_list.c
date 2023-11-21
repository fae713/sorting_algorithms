#include <stdio.h>
#include "sort.h"

/**
 * print_list - This prints a list of integers/elements in the array
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int x;

	i = 0;
	while (list)
	{
		if (x > 0)
			printf(", ");
		printf("%d", list->n);
		++x;
		list = list->next;
	}
	printf("\n")
}
