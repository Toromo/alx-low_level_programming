#include "main.h"


/**
* print_times_table - prints the n times table, starting with 0
* @n: int to check
*/
void print_times_table(int n)
{
	int j, k;


	for (n = 0; n < 16; n++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * n;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
