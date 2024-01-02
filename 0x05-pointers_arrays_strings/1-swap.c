#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap
 * @a: first
 * @b: second
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
