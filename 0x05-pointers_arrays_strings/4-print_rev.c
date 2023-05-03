#include "main.h"
#include<string.h>

/**
 * print_rev - prints string in reverse followed by a new line
 * @s: string
 * return: void
 */

void print_rev(char *s)
{
	int len;
	int k;

	len = strlen(s);

	for (k = len - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
