#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create function
 *@size: len of arr
 *@c: chaar to add
 *
 * Return: return arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
