#include "main.h"

/**
 * _memset - function
 * @s: pointer to fill
 * @b: constant byte
 * @n: number to fill
 *
 * Return: return pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; 0 < n; i++)
	{
		*s(i + 1) = b;
		n--;
	}
	return (s);
}
