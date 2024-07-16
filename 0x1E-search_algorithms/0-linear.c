#include "search_algos.h"

/**
 * linear_search - function that search about value in  a given list
 *
 * @array: given input array
 * @size: is the size of the array
 * @value: the value that search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("comparing the values [%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
