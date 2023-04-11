#include "main.h"

/**
 * _print_binary - print a number in binary.
 * @n: the number to be printed.
 */
void _print_binary(unsigned long int n)
{
	if (n)
	{
		_print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}

/**
 * print_binary - print a number in binary.
 * @n: the number to be printed.
 */
void print_binary(unsigned long int n)
{
	if (n)
		_print_binary(n);
	else
		_putchar('0');
}
