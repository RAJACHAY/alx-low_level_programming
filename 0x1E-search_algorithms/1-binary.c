#include "search_algos.h"

/**
 * binary_search - Write a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: A a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: The value to search for
 *
 * Return: If value is not present in array or if array is NULL
 * , your function must return -1
 *
 * Description: Prints the [sub]array being searched after each change.
 */

int binary_search(int *array, size_t size, int value);
{
	size_t i, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d, ", array[i]);
		printf("\n");

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (value > array[i])
			left = i + 1;
		else
			right = i - 1;
	}
	return (-1);
}
