#include <stdio.h>

/**
*main - the entry point
*Return: 0 if successful
*/

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
			if (n == 57)

				continue;

			else
			putchar(',');
			putchar(' ');

	}
	putchar('\n');

	return (0);
}
