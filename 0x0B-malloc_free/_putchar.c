#include <unistd.h>
#include "main.h"

/**
 * _putchar - print char
 * @c: char to print
 *
 * Return: return
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
