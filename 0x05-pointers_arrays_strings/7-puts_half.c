#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * return: void
 */

void puts_half(char *str)
{
	int len;
	int n;
	int k;

	len = strlen(str);

	if ((len) % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (k = n; k < len; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
