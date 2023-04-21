#include <stdio.h>

/**
*main is the entry point
*Description: program that prints all single digit numbers of base 10 starting from 0
*Return: 0 if successful
*/

int main(void)
{
	int n;

	while (n < 10)
	{
	printf("%d", n);
	n++;
	}
	putchar('\n');

	return (0);
}
