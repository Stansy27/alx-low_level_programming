#include "3-calc.h"
#include <stdio.h>

/**
 * main - a basic calculator
 * @argc: the size of the argument vector
 * @argv: the argument vector
 *
 * Description: this program accepts anumber, an operator and another number,
 * in that order, it performs the specified operation and prints the result to
 * standard output (followed by a newline). if called with the wrong number of
 * arguments, it prints "error" and terminates the process with a status of 98.
 * if the operator given is not one of '+', '-', '*', '/', or '%', it prints
 * "error" and terminate the process with the status of 99. if asked to perform
 * division by 0 (e.g. using the '/' or '%' operators), it prints "error" and
 * terminates the process with a status value of 100.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("error");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("error");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
