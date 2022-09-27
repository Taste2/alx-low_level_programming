#include "main.h"

/**
 * _strchr - find a char in a str
 * @s: the string to be looked into
 * @c: the char to be searched
 * Return: Null if not found else c
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
	if (*s == c)
		return (s);
	if (!*s)
		return (NULL);
	}
	return (NULL);
}
