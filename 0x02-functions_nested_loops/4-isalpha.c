#include "holberton.h"

/**
 * _isalpha - Checks if a character is uppercase.
 * @c: The character to be passed as argument.
 *
 * Return: 1 if character is uppercase, 0 if not.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
