#include "main.h"

/**
 * flip_bits - Returns number of bits to be flipped.
 *
 * @n: The number.
 * @m: The number @n is  flipped to.
 *
 * Return: Number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int toFlip = 0;

	while ((n ^ m) > 0)
	{
		toFlip += ((n ^ m) & 1);
		(n ^ m) >>= 1;
	}
	return (toFltp);
}
