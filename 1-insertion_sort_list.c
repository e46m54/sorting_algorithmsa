#include "sort.h"


/**
 * insertion_sort_list - insertion sort algorithm
 * @array: pointer to array to sort
*/
void insertion_sort_list(listint_t **list)
{
size_t
short int swapped;
int tmp;

do {
	swapped = 0;
	for (i = 1; i < size; i++)
	{
		if (array[i - 1] > array[i])
		{
			tmp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = tmp;
			swapped = i;
			print_array(array, len);
		}
	}
	size = swapped;
} while (size >= 1);

}

