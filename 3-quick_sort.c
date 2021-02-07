#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order
 * using the quick sort sort algorithm
 * @array: pointer to the array
 * @size: size of the array
*/
void quick_sort(int *array, size_t size)
{
recursive_quick_sort(array, size, 0, size - 1);
}

/**
 * recursive_quick_sort - recursive part
 * @array: array to use
 * @size: size
 * @start: start index
 * @end: end index
*/
void recursive_quick_sort(int *array, size_t size, size_t start, size_t end)
{
size_t p;
if (start < end)
{
	p = partition(array, size, start, end);
	if (p != 0)
		recursive_quick_sort(array, size, start, p - 1);
	recursive_quick_sort(array, size, p + 1, end);
}

}

/**
 * partition - partition the array
 * @array: array to use
 * @size: size
 * @start: start index
 * @end: end index
 * Return: partition index
*/
size_t partition(int *array, size_t size, size_t start, size_t end)
{
int pivot = array[end];
size_t i = start;
size_t j;

for (j = i + 1; j <= end; j++)
{
	if (array[j] < pivot)
	{
		swap_int(array, i, j);
		print_array(array, size);
		i++;
	}
}
swap_int(array, i, end);
return (i);
}

/**
 * swap_int - swap variable values
 * @array: array to use
 * @a: index 1
 * @b: index 2
*/
void swap_int(int *array, size_t a, size_t b)
{
int tmp;
tmp = array[a];
array[a] = array[b];
array[b] = tmp;
}
