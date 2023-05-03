#include "main.h"
#include <string.h>

/**
 * puts2 -  prints every other character of a string
 * starting with the first character
 * followed by a new line.
 * @str: string
 * returns: void
 */

void puts2(char *str)
{
	int k;
	int len;

	len = strlen(str);

	for (k = 0; k < len; k++)
	{
		if (k == 0 || k % 2 == 0)
			_putchar(str[k]);
		else
			continue;
	}
	_putchar('\n');
}
