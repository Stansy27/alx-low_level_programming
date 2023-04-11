#include "main.h"

/**
 * set_bit - will turn a bit on.
 * @n: is a pointer to the integer to operate on.
 * @index: the index of the bit to be turned on.
 *
 * Return: -1 if n is NULL or the index is invalid, otherwise 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(*n) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
