#include <stdlib.h>
#include <time.h>

/**
 * main - Function detemine the sign
 * Return: return 0 after finish
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		if (n < 0)
		{
			printf("%d is negative", n);
		}
		else
			printf("%d is zero");
	}
	return (0);
}
