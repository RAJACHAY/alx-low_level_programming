#include "main.h"

/**
 * islower - function detect lower
 *@c: char to check
 *Return: return if lower or not
 */

int _islower(int c)
{
	char  i;

	for (i = 'A'; i < 'Z'; i++)
	{
		if (c == i)
		{
			_putchar('0');
		}
		else
			_putchar('1');
	}

}
