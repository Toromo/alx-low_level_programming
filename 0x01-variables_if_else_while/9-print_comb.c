#include <stdio.h>

/**
*main - the entry point
*Return: 0 if successful
*/

int main(void)
{
	int n;

	for (n == 0 ; n <= 9 ; n++)
	{
		putchar(n + 48);
		if (n <= 8)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
