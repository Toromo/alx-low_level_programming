#include <stdio.h>

/**
*main - the entry point
*Description: 'a program that prints the lowercase alphabet in reverse'
*Return: 0 if successful
*/

int main(void)
{
	int n = 122;

	for (n <= 122 ; n >= 97 ; n--)
	{
	putchar(n);
	}
	putchar('\n');

	return (0);
}
