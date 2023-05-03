#include "main.h"
#include <string.h>

/**
 * _puts - prints string followed by new line
 * @str: string
 * return: void
 */

void _puts(char *str)
{
	int len;
	int k;

	len = strlen(str);

	for (k = 0; k <= len; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
