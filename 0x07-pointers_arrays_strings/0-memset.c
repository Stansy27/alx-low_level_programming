#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: a memory area pointer
 * @b: the byte to be written to memory
 * @n: the number of bytes to write
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		s[i] = b;
	return (s);
}
