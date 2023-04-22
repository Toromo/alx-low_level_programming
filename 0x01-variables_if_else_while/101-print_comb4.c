#include <stdio.h>

/**
*main - the entry point
*Return: 0 if successful
*/

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x <= 55; x++)
	{
		for (y = 49; y <= 56; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (x < y && y < z)
				{
				putchar(x);
				putchar(y);
				putchar(z);

					if (x == 55 && y == 56 && z == 57)

						continue;
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
