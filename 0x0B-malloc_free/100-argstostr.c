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
	char *s;
	int i, j, k = 0;

	if (ac == o || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
			ac++;
		i++;
	}

	s = malloc(sizeof(char) * ac + 1);

	if (s == NULL)
		return (NULL);

	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];

		s[k++] = '\n';

		i++;
	}

	s[ac] = '\0';

	return (s);
}
