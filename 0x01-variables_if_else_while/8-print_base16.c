#include <stdio.h>

/**
*main - the entry point
*Return: 0 if successful
*/

int main(void)
{
	int n;
	char ch;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + 48);
	}
	for (ch = 'a' ; ch < 'g' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
