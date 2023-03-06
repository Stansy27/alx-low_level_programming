#include "main.h"

/**
 * _strchr - locate character in string
 * @s: a pointer to the string to search
 * @c: the character to search for
 *
 * Return: If a match is found, return a pointer to it.
 * Otherwise, return NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
