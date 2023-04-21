#include <stdio.h>

/**
*main - the entry point
*Return: 0 if successful
*/

int main(void)
{
	int n;

	while (n < 10)
	{
	putchar(n + 48);
	n++;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
