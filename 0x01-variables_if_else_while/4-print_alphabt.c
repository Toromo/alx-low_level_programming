#include <stdio.h>

/**
*main - the entry point
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
