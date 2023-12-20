#include "main.h"

/**
 * print_alphabet - pribt abc
 * Return: return 0
 */

void print_alphabet(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
