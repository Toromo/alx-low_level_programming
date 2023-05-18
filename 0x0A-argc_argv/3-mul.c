#include "main.h"
#include <stdio.h>

/**
 * _atoi - string to integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int i, j, k, len, r, num;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	r = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && r == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
				num = -num;
			k = k * 10 + num;
			r = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			r = 0;
		}
		i++;
	}

	if (r == 0)
		return (0);

	return (k);
}

/**
 * main - multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int product, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	product = n1 * n2;

	printf("%d\n", product);

	return (0);
}
