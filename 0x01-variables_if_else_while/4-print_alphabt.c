#include <stdio.h>

/**
 *  main - Print char
 *  Return: retun afet success
 */

int main(void)
{
	char c = 'a';

	while (c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
