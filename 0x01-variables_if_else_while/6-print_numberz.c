#include <stdio.h>

/**
*main - the entry point
*Description: program that prints all single digit numbers of base 10 starting from 0 using only putchar function maximum of two times
*Return: 0 if successful
*/

int main(void)
{
	int n;

	while (n < 10)
	{
	putchar(n + 48);
	n++;
	}
	putchar('\n');

	return (0);
}
