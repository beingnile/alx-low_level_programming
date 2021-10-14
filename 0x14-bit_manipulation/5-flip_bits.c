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
	unsigned long int toFlip = 0, xor_var = n ^ m;

	while (xor_var > 0)
	{
		toFlip += (xor_var & 1);
		(xor_var >>= 1;
	}
	return (toFlip);
}
