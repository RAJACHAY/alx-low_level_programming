#include "main.h"
#include "unistd.h"

/**
 * _putchar - put char
 * @c: char toprint
 *
 * Return: return char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
