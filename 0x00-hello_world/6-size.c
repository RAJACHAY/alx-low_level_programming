#include<stdio.h>

/**
 * main - Entry function
 * Return: 0 if executed
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;


	printf("Size of a char:%lu byte(s)\n", sifeof(a));
	printf("Size of an int:%lu  byte(s)\n", sifeof(b));
	printf("Size of a long int:%lu byte(s)\n", sifeof(c));
	printf("Size of a long long int:%lu byte(s)\n", sifeof(d));
	printf("Size of a float:%lu byte(s)\n", sifeof(e));
	return (0);
}
