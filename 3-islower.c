#include "main.h"

/**
 * _islower - function detect lower
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
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
