#include "main.h"

/**
 * flip_bits - count the unique bits in two values.
 * @n: first integer.
 * @m: second integer.
 *
 * Return: number of bits that differ between n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;
	m = 0;
	while (n)
	{
		m += 1 & n;
		n >>= 1;
	}
	return (m);
}
