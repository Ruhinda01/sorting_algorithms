#include "sort.h"
/**
 * swap - swapping the values of two variables
 * @a: integer a
 * @b: integer b
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - performs the partitioning step using lomuto scheme
 * @arr: array
 * @low: lowest index
 * @high: highest index
 * @size: size of array
 * Return: i
 */
int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int j, i = low;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			if (j != i)
			{
				swap(&arr[j], &arr[i]);
				print_array(arr, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		swap(&arr[high], &arr[i]);
		print_array(arr, size);
	}
	return (i);
}

/**
 * quick_sort_recursive - recursively implements the quicksort
 * @arr: array
 * @low: lowest index
 * @high: highest index
 * @size: SIZE OF ARRAY
 * Return: nothing
 */
void quick_sort_recursive(int arr[], int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);
		quick_sort_recursive(arr, low, pi - 1, size);
		quick_sort_recursive(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of intgersin ascending order
 * @array: array of integers
 * @size: size of integers
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursive(array, 0, size - 1, size);
}
