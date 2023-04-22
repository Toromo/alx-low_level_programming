#include <stdio.h>

/**
*main - the entry point
*Return: 0 if successful
*/

int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (n < m)
			{
			putchar(n);
			putchar(m);

				if (n == 56 && m == 57)

					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');

	return (0);
}
