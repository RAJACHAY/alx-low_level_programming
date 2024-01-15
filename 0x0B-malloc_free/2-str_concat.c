#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char  *arr;
	int i, l, j, k;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i] != '\n')
		i++;

	while (s2[i] != '\n')
		j++;

	k = i + j;
	arr = malloc(sizeof(char) * (k + 1));

	for (l = 0; l < i; l++)
	{
		arr[l] = s1[i];
	}
	for (i = 0; i < j; i++, l++)
	{
		arr[l] = s2[i];
	}
	return (arr);
}
