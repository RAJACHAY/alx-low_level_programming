#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: lll
 *
 * Return: return pointer
 */

char *_strdup(char *str)
{

	char *arr;
	int i = 0;
	int r;

	if  (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	arr = malloc(sizeof(char) * (i + 1));

	for (r = 0; r < i; r++)
		arr[r] = str[r];

	return (arr);
}
