#include <stdio.h>

/**
 *  main - Print char
 *  Return: retun afet success
 */

int main(void)
{
	int a;
	char c;

	for (a = 0; a <= 9; a++)
	{
		putchar(a);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
