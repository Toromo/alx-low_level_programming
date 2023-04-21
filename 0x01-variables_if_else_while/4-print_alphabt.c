#include <stdio.h>

/**
*main - the entry point
*Description: program that prints the alphabet in lowercase, using only putchar function maximum of two times
*Return: 0 if successful
*/

int main(void)
{
	int n = 97;

	while (n <= 122)
		if (n == 101 || n == 113)
			n++;
		else
			{
			putchar(n);
			n++;
			}

	putchar('\n');

	return (0);
}
