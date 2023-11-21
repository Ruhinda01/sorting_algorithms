#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped, temp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
