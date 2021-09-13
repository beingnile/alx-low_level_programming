#include "main.h"

/**
 * _strchr - Locates character in string.
 *
 * @s: Pointer to string where character is located from.
 * @c: Character to be located.
 *
 * Return: Pointer to first occurrence of @c in @s,
 *	   NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
