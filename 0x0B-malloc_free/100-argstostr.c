#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate arguments to a string.
 *
 * @ac: Number of arguments passed.
 * @av: Array of pointers to args.
 *
 * Return: Pointer to new string.
 *	   NULL if ac is 0, av NULL or in failure
 */
char *argstostr(int ac, char **av)
{
	char *st;
	int i, j, k = 0;
	int l = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}

	st = malloc(sizeof(char) * l + 1);

	if (st == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			st[k++] = av[i][j];

		st[k++] = '\n';
	}

	st[l] = '\0';

	return (st);
}
