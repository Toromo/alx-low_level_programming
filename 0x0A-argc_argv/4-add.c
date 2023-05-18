#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check string for digits
 * @s: array
 * Return: 0 if successful
 */

int check_num(char *s)
{
	unsigned int count;

	count = 0;
	while (count < strlen(s))

	{
		if (!isdigit(s[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])

{

	int count;
	int integer;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			integer = atoi(argv[count]);
			sum += integer;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
