#include <stdio.h>

/**
*main - the entry point
*Return: 0 if successful
*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
	putchar(ch);
	}

	putchar('\n');

	return (0);
}
