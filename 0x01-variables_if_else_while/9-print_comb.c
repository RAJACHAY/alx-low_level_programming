#include <stdio.h>

/**
 *  main - Print char
 *  Return: retun afet success
 */

int main(void)
{
	int a;

	for (a = '0'; a < '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
