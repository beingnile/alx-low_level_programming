#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 *
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);

	return (0);
}
